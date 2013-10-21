//
//  Benchtree.cpp
//  P22
//
//  Created by xiaoxiao zheng on 10/21/13.
//  Copyright (c) 2013 xiaoxiao zheng. All rights reserved.
//

//#include "RST.h"
//#include "countint.h"
//
//#include <cmath>
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//vector<int> getSizes(int size)
//{
//    std::vector<int> sizes;
//    std::vector<int>::iterator it;
//    it = sizes.begin();
//    int i = 1;
//    int j = 1;
//    
//    while (i < (size + 1)/2 )
//    {
//        sizes.insert(sizes.end(),i);
//        j++;
//        i = (int(pow(2.0,j))) - 1;
//        
//        cout<<"Sizes "<<i<<endl;
//    }
//    return sizes;
//}
//
//
//int main(int argc, char* argv[])
//{
//    int sorted = 0;
//    int shuffled = 0;
//    
//    if ((string(argv[2])).compare("sorted") == 0)
//    {
//        sorted = 1;
//    }
//    else if ((string(argv[2])).compare("shuffled") == 0)
//    {
//        
//        shuffled = 1;
//    }
//    else {
//        cout<<"Incorrect Command"<<endl;
//    }
//    
//    int size = atoi(argv[3]);
//    int runs = atoi(argv[4]);
//    
//    cout << "# Benchmarking average number of comparisons for successful find" << endl;
//    if ((string(argv[1])).compare("bst") == 0 || (string(argv[1])).compare("rst") == 0 || (string(argv[1])).compare("set") == 0) {
//        cout << "# Data structure: "<<argv[1] << endl;
//    }
//    else cout<<"Incorrect Command"<<endl;
//    
//    if (sorted == 1)
//        cout << "# Data: sorted" << endl;
//    if (shuffled == 1)
//        cout << "# Data: shuffled" << endl;
//    cout << "# N is powers of 2, minus 1, from 1 to " << size << endl;
//    cout << "# Averaging over  " << runs << " runs for each N" << endl;
//    cout << "#\n#\tN\tavgcomps\tstdev" << endl;
//    
//    
//    
//    vector<int> sizes = getSizes(size);
//    
//    std::vector<int>::iterator it;
//    for (it = sizes.begin() ; it != sizes.end(); it++) {
//        std::vector<countint> v;
//        double avgcomps = 0.0;
//        double thiscomps = 0.0;
//        double thissq = 0.0;
//        double avgsq = 0.0;
//        double std_dev = 0.0;
//        unsigned long count = 0;
//        for (int i = 0 ; i < runs; i++) {
//            v.clear();
//            for (int j = 0; j < *it ; j++) {
//                v.push_back(j);
//            }
//            //cout<<"*it"<<*it<<endl;
//            if (shuffled) {
//                std::random_shuffle(v.begin(),v.end());
//            }
//            
//            std::vector<countint>::iterator vit = v.begin();
//            std::vector<countint>::iterator ven = v.end();
//            if ( string(argv[1]).compare("bst") == 0) {
//                BST<countint> b = BST<countint>();
//                for (vit = v.begin(); vit != ven; ++vit) {
//                    b.insert(*vit);
//                }
//                
//                countint::clearcount();
//                for(vit = v.begin(); vit != ven; ++vit) {
//                    b.find(*vit);
//                }
//                count = countint::getcount();
//            }
//            if (string(argv[1]).compare("rst") == 0) {
//                RST<countint> r = RST<countint>();
//                for (vit = v.begin(); vit != ven; ++vit) {
//                    r.insert(*vit);
//                }
//                countint::clearcount();
//                for(vit = v.begin(); vit != ven; ++vit) {
//                    r.find(*vit);
//                }
//                count = countint::getcount();
//                cout<<"Counts "<<count<<endl;
//            }
//            
//            else {
//                set<countint> s;
//                for (vit = v.begin(); vit != ven; ++vit) {
//                    s.insert(*vit);
//                }
//                countint::clearcount();
//                for(vit = v.begin(); vit != ven; ++vit) {
//                    s.find(*vit);
//                }
//                count = countint::getcount();
//            };
//            
//            thiscomps = (double)count / (double)(*it);
//            
//            cout<<"*it"<<*it<<endl;
//            
//            avgcomps += thiscomps;
//            thissq = pow(thiscomps,2);
//            avgsq += thissq;
//        }
//        
//    
//        avgcomps = avgcomps / (double)runs;
//        avgsq = avgsq / (double)runs;
//        std_dev = sqrt(avgsq - pow(avgcomps,2));
//        cout << "\t" << *it << "\t\t" << avgcomps << "\t\t" << std_dev << endl;
//        
//    }
//}
