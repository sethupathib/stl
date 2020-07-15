//
//  main.cpp
//  string_tok
//
//  Created by Sethupathi on 25/03/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    
    char s[100] =  "Today is a rainy day";
    char *ptr = strtok(s, " ");
    cout<<ptr<<endl;
    
    while (ptr!=NULL)
    {
        ptr = strtok(NULL," ");
        cout<<ptr<<endl;
    }
    
    
    return 0;
}
