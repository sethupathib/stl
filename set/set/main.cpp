//
//  main.cpp
//  set
//
//  Created by Sethupathi on 28/03/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

//set stl demonstration

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
  
    int arr[] = {1,2,5,5,5,7,8,9,0,4,2,9,6,7,8};
    int n= sizeof(arr)/sizeof(int);
    set<int> s;
    
    for(auto i=0;i<n;i++)
    {
        s.insert(arr[i]);
        
    }
    
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
    
//    for(auto it:s)
//    {
//        cout<<*it<<" ";
//    }
    
    return 0;
}
