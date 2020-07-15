//
//  main.cpp
//  maps
//
//  Created by Sethupathi on 26/03/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    
    map<string, int> m;
    
    //insert
    m.insert(make_pair("Mango", 100));

    //search
    string fruit;
    cin>>fruit;
    auto it = m.find(fruit);
    
    if(it!=m.end())
    {
        cout<<"price of fruit "<<fruit<< " is "<<m[fruit]<<endl;
    }
    
    else
        cout<<"fruit not present"<<endl;
    m[fruit] += 200;
    
    cout<<"Revised price of fruit is  "<<m[fruit];
   // m.erase(fruit);

    m["litchi"] = 250;
    m["apple"] = 180;
    cout<<endl;
    cout<<endl;
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<"Fruit : "<<it->first<<"  Value : "<<it->second<<endl;
    }
    
    
    return 0;
}
