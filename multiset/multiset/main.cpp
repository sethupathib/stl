//
//  main.cpp
//  multiset
//
//  Created by Sethupathi on 09/04/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    
    int a[] = {10,20,30,10,10};
    multiset<int> m(a,a+5);
    
    m.erase(30);
    m.insert(4);
   
    
    cout<<m.count(10);
     cout<<endl;
    for(auto x:m)
    {
        cout<<x<<" ,";
    }

    cout<<endl;


    int amz[] = {12,3,4,5,6,5,6};
    for(auto i:amz)
    {
        cout<<i<<endl;
    }

    return 0;
}
