//
//  main.cpp
//  string_sort
//
//  Created by Sethupathi on 23/03/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string a, string b)
   {
       if (a.length() == b.length())
       {
           return a<b;
       }
       return a.length()>b.length();
   }

int main(int argc, const char * argv[]) {

    int n;
    cin>>n;
    cin.get();
    
    string s[100]; //vector
    
    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]);
        
    }
    
   
    
    sort(s,s+n);
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
        
    }
    
    
    return 0;
}
