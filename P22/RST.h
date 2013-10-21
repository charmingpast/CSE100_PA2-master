//
//  RST.h
//  P22
//
//  Created by xiaoxiao zheng on 10/18/13.
//  Copyright (c) 2013 xiaoxiao zheng. All rights reserved.
//

#ifndef P22_RST_h
#define P22_RST_h

#include "BST.h"
#include "BSTNode.h"
#include "BSTIterator.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

template <typename Data>
class RST :public BST<Data>{
public:
    virtual bool insert(const Data& item){
        BSTNode<Data>* tmp = new BSTNode<Data>(item);
        BSTNode<Data>* pcurrent = 0;
        BSTNode<Data>* current = this->root;
        while (current != 0) {
            pcurrent = current;
            if (item == current->data) {
                cout<<"Can't not insert, Duplicate items"<<endl;
                return 0;
            }
            if (item < current->data) {
                current = current->left;
            }
            else current = current->right;
        }
        tmp->parent = pcurrent;
        if (pcurrent == 0) {
            this->root = tmp;
            this->isize++;
        }
        else if (item < pcurrent->data){
            pcurrent->left = tmp;
            this->isize++;
        }
        else {
            pcurrent->right = tmp;
            this->isize++;
        }
        
      
            while (pcurrent && pcurrent->priority < tmp->priority) {
                if (tmp->isLeft()) {
                    rightRotate(pcurrent);
                }
                else{
                    leftRotate(pcurrent);
                }
                pcurrent = tmp->parent;
                if (tmp->parent) {
                    pcurrent->left = tmp->parent->left;
                    pcurrent->right = tmp->parent->right;
                }
                

            }
        
        return 1;
        
    }
    
    bool leftRotate(BSTNode<Data> *x){
        BSTNode<Data> *y = x->right;
        x->right = y->left;//Turn x subtree into y subtree
        if (y->left != 0) {
            y->left->parent = x;
        }
        y->parent = x->parent;// link x's parent to y
        if (x->parent == 0) {
            this->root = y;
        }
        else if (x->parent != 0) {
            if(x->isLeft()){
                x->parent->left = y;
            }
            else x->parent->right = y;
        }
        
        y->left = x;
        x->parent = y;
        return 1;
    }
    
    bool rightRotate(BSTNode<Data> *y){
        BSTNode<Data> *x = y->left;
        y->left = x->right;
        if (x->right != 0) {
            x->right->parent = y;
        }
        x->parent = y->parent;
        if (y->parent == 0) {
            this->root = x;
        }
        else if (y->parent != 0) {
            if(y->isLeft()) {
                y->parent->left = x;
            }
            else y->parent->right =x;
        }
        
        
        x->right = y;
        y->parent = x;
        return 1;
    }
};


#endif
