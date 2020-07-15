//
//  main.cpp
//  stack
//
//  Created by Sethupathi on 26/03/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    stack<int> s;
    
    for(int i=0;i<5;i++)
    {
        s.push(i);
        
    }
    
    while(!s.empty())
    {
        cout<<s.top()<<" , ";
        s.pop();
        
    }
    
    return 0;
}
