//
//  main.cpp
//  search
//
//  Created by Sethupathi on 23/03/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

//These source codes are practice codes for STL concepts.



#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//searching in an unsorted array
void find1()
 {
 int arr[] = {1,100,345,2,3,43,55};
 int key;
 int n= sizeof(arr)/sizeof(int);
 cin>>key;
 
 auto it = find(arr, arr+n, key);
 long index = it - arr;
 
 if (index==n)
 {
     
     cout<<"Key "<<key<<"  not present in the list"<<endl;
 }
 else
 
 cout<<"Given Element is "<<*it<<"   found at position "<<it-arr<<endl;
 }


//binary search - searching elements in a sorted array.


void bsearch()

{
    
      int arr[] = {10,20,35,39,120,50,50,50,135,250};
        int key;
        int n= sizeof(arr)/sizeof(int);
        cin>>key;
        
        bool present = binary_search(arr, arr+n, key);
        auto it = lower_bound(arr,arr+n,key);
        
        if(present)
        {
        
            cout<<"Element present"<<endl;
            cout<<"Element present"<<" at index "<<it-arr<<endl;
        }
     
        else cout<<"Element not found"<<endl;
        
        auto lb = lower_bound(arr,arr+n,key);
        auto ub = upper_bound(arr, arr+n,key);
        
        cout<<"The Element "<<key<<"  occurs "<<ub-lb<<" times"<<endl;
    
}


int main(int argc, const char * argv[]) {
    
    string s0 = " Hello World  ";
    
    string s1;
    
    s0.append("I love CPP\n");
    cout<<s0;
    
    
//    if(s1.empty())
//    {
//        cout<<"Empty String"<<endl;
//    }
    
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;
    cout<<"\n";
    s0 = "Apple";
    s1 = "Orange";
    
    cout<<s1.compare(s0)<<endl;
    
    cout<<"\n"<<endl;
    string s = "I want to be a rockstar competitive programmer";
    auto idx = s.find("rockstar");
    string word = "rockstar";
    auto len = word.length();
    cout<<s<<endl;
    s.erase(idx,len);
    cout<<s<<endl;
//    cout<<idx<<endl;
    
    
    //Iterators
    
    for(auto it= s0.begin();it!=s0.end();it++)
    {
        cout<<*it<<endl;
    }
    cout<<"\n";
    
    for (auto c:s1)
    {
        cout<<c<<endl;
    }
    
    
    return 0;
}
