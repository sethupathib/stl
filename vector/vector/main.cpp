//
//  main.cpp
//  vector
//
//  Created by Sethupathi on 25/03/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;



int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    
    vector<int> a(5,10);
    vector<int> b(a.begin(),a.end());
    int n,no;
    cin>>n;
    a.reserve(1000); // done to avoid the memory doubling every time
//    for (auto it=b.begin();it!=b.end();it++)
//    {
//        cout<<(*it)<<endl;
//    }
//
    
    
    for(int i=0;i<n;i++)
        
    {
        cin>>no;
        a.push_back(no);
    }
    
    
    cout<<"before"<<endl;
    for (auto x:b)
    {
        cout<<x<<" ";
    }
    
    cout<<endl;
    cout<<"after"<<endl;
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    
    
    cout<<"\n";
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    cout<<a.max_size()<<endl;
    
    cout<<"\n";
    
    a.pop_back();
    
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    
    cout<<"\n";
    a.insert(a.begin()+3,3, 299);

    for(auto i:a)
    {
        cout<<i<<" ";
    }
    
    a.erase(a.begin()+3, a.begin()+5);
    
    cout<<endl;
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    
    cout<<"Front Element is "<<a.front()<<"  &&"<< "  Back Element is  "<<a.back()<<endl;
    
    a.clear();
    
    if(a.empty())
    {
        cout<<"vector is empty";
    }
 
    return 0;
}
