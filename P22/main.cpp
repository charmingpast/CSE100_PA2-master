//
//  main.cpp
//  P22
//
//  Created by xiaoxiao zheng on 10/18/13.
//  Copyright (c) 2013 xiaoxiao zheng. All rights reserved.
//

//#include <iostream>
//
//#include "BST.h"
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using std::cout;
//using std::endl;
//using std::vector;
//
//
///**
// * A simple test driver for the BST class template.
// * P1 CSE 100 2012
// * Author: P. Kube (c) 2012
// */
//int main() {
//    
//    /* Create an STL vector of some ints */
//    vector<int> v;
//    v.push_back(98);
//    v.push_back(2);
//    v.push_back(96);
//    v.push_back(23);
//    v.push_back(100);
//    v.push_back(33);
//    v.push_back(95);
//    
//    
//    
//    
//    /* Create an instance of BST holding int */
//    BST<int> b;
//    
//    /* Insert a few data items. */
//    vector<int>::iterator vit = v.begin();
//    cout<<*vit<<endl;//Test
//    
//    vector<int>::iterator ven = v.end();//Is this an iterator????
//    cout<<*ven<<endl;//Test
//    
//    vit = v.begin();
//    for(; vit != ven; ++vit) {
//        // all these inserts are unique, so should return true
//        if(! b.insert(*vit) ) {
//            cout << "Incorrect return value when inserting " << *vit << endl;
//            return -1;
//        }
//    }
//    
//    
//    
//    /* Test size. */
//    cout << "Size is: " << b.size() << endl;
//    cout<<"V size is "<<v.size()<<endl;
//    b.insert(2);
//    
//    if(b.size() != v.size()) {
//        cout << "... which is incorrect." << endl;
//        return -1;
//    }
//    
//    /* Test find return value. */
//    vit = v.begin();
//    
//    cout<<"begin is "<<*vit<<endl;
//    
//    BST<int>::iterator en = b.end();
//    
//    cout<<"end is "<<*en<<endl;
//    
//    
//    for(; vit != ven; ++vit) {
//        if(*(b.find(*vit)) != *vit) {
//            cout << "Incorrect return value when finding " << *vit << endl;
//            return -1;
//        }
//    }
//    
//    
//    /* Sort the vector, to compare with inorder iteration on the BST */
//    sort(v.begin(),v.end());
//    
//    
//    /* Test BST iterator; should iterate inorder */
//    cout << "traversal using iterator:" << endl;
//    vit = v.begin();
//    // BST<int>::iterator en = b.end();//Unused variable 'en'
//    BST<int>::iterator it = b.begin();
//    for(; vit != ven; ++vit) {
//        cout << *it << endl;
//        if(*it != *vit) {
//            cout << *it << "," << *vit << ": Incorrect inorder iteration of BST." << endl;
//            return -1;
//        }
//        ++it;
//    }
//    b.insert(2);
//    b.print();
//    b.remove(33);
//    b.remove(20);
//    b.print();
//    cout << "OK." << endl;
//}

/*
#include "RST.h"
#include "countint.h"
#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;
 */

/**
 * A simple partial test driver for the RST class template.
 * P2 CSE 100
 * Author: P. Kube (c) 2010, 2011, 2012
 */
//int main(int argc, char** argv) {
//    
//    int N = 5;
//    if(argc > 1) N = atoi(argv[1]);
//    // a good RST implementation should need no more than this number
//    // of key comparisons when inserting N keys
//    double  maxcompsperkey =  (log(N) * 2.5);
//    
//    /* Create an STL vector of some countints, in sorted order */
//    vector<countint> v;
//    for(int i=0; i<N; i++) {
//        v.push_back(i);
//    }
//    
//    /* Create an empty instance of RST holding countint */
//    RST<countint> r = RST<countint>();
//    
//    /* Clear the comparison counter */
//    countint::clearcount();
//    
//    /* Insert the data items, in order */
//    cout << "Inserting " << N << " sorted keys in initially empty RST...";
//    vector<countint>::iterator vit = v.begin();
//    vector<countint>::iterator ven = v.end();
//    
//    std::random_shuffle(v.begin(),v.end());
//    
//    for(; vit != ven; ++vit) {
//        // all these inserts are unique, so should return true
//        if(! r.insert(*vit) ) {
//            cout << endl << "Incorrect return value when inserting " << *vit << endl;
//            return -1;
//        }
//    }
//    cout << " done." << endl;
//    
//    std::sort(v.begin(), v.end());
//    
//    /* How many comparisons did it take to do the inserts, avg per key? */
//    double compsperkey =  countint::getcount() / (double) N;
//    cout << "That took " << compsperkey << " average comparisons per key, ";
//    if(compsperkey <= maxcompsperkey) cout << "OK. " << endl;
//    else if (compsperkey <= maxcompsperkey * 2) cout << "could be better... " << endl;
//    else {
//        cout << "way too many!" << endl;
//        return -1;
//    }
//    
//    /* Test iterator; should iterate the entire tree inorder */
//    //cout<<"something is wrong"<<endl;
//    cout << "Checking traversal using iterator..."<<endl;
//    //r.inorder();
//    
//    
//    BST<countint>::iterator en = r.end();
//    BST<countint>::iterator it = r.begin();
//    
//    
//    
//    vit = v.begin();
//    int i = 0;
//    for(; it != en; ++it) {
//        
//        if(*it != *vit) {
//            cout << endl << "Incorrect inorder iteration of RST." << endl;
//            return -1;
//        }
//        ++i;
//        ++vit;
//    }
//    if(i!=N) {
//        cout << endl << "Early termination during inorder iteration of RST." << endl;
//        return -1;
//    }
//    cout << " OK." << endl;
//    return 0;
//}

