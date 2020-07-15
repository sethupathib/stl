//
//  main.cpp
//  multi_map
//
//  Created by Sethupathi on 26/03/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

//unordered map
#include <iostream>
#include <cstring>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    unordered_map<string, int> um;
    um.insert(make_pair("Mango", 100));
    
    for(auto i=um.begin();i!=um.end();i++)
    {
        cout<<i->first<< " -> "<<i->second<<endl;
    }
    
    um["Strawberry"] = 120;
    for(auto it:um)
    {
        
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    
    return 0;
}
