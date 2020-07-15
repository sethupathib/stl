//
//  main.cpp
//  strings
//
//  Created by Sethupathi on 30/04/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    
    vector<string> st;
    st.push_back("UCSD");
    st.push_back("UCLA");
    st.push_back("UCB");
    st.push_back("MIT");
    st.push_back("Harvard");
    st.push_back("CMU");
    
//    for(auto i:st)
//    {
//        cout<<i<<endl;
//    }
    cout<<"\t"<<endl;
    
    string s = "Hello_Seattle";
    string s1(s);
    string s2(5,'$');
    string s3(s,5,8);
    
    string sh = "Sethupathi";
    if(s2.find(sh)!= string::npos)
    {
        cout<<"found the string - "<<s3<<" @ "<<"pos "<<s.find(s3)<<endl;
    }
    else
        
        cout<<"String not found"<<endl;
    
    string sa = "New_York";
    cout<<sa.substr(3)<<endl;
    
    string f_string = "99.99";
    
    //somewhat important in string handling
   auto pos = f_string.find(".");
    if(pos!=string::npos)
    {
        cout<<"floating part = "<<f_string.substr(pos)<<endl;
    }
    
    string s4(s.begin(),s.begin()+5);

    char ch = s4.front();
    char ch1 = s4.back();
    cout<<ch<<"\t"<<ch1<<endl;
    
     cout<<s4<<endl;
    reverse(s4.begin(), s4.end());
     cout<<s4<<endl<<endl;
//    cout<<s1<<endl;
//    cout<<s<<endl;
//    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
     s4.clear();
     cout<<s3<<"\t"<<s3.length()<<endl;
    return 0;
}
