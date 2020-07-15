//
//  main.cpp
//  list
//
//  Created by Sethupathi on 25/03/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
#include <list>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    
    list<string> s{"Seattle","DC","San Diego", "Los Angeles"};
    s.push_back("New York");
    
    for (auto i:s)
    {
        cout<<i<<"-->";
    }
    cout<<endl;
    cout<<endl;
    s.sort();
    
    for (auto i:s)
       {
           cout<<i<<"-->";
       }
       cout<<endl;
    cout<<endl;
    s.reverse();
    
    for (auto i:s)
       {
           cout<<i<<"-->";
       }
       cout<<endl;
    
    s.pop_front();
    
    s.push_front("Chicago");
    cout<<endl;
    cout<<"Front Element -->";
    cout<<s.front()<<endl;
    
    cout<<"New list arrangement -->"<<endl;
    for (auto i:s)
          {
              cout<<i<<"-->";
          }
          cout<<endl;
       
    string f;
    cin>>f;
    s.remove(f);
    cout<<endl;
    
    cout<<"List after removing the given element is --> \n";
    for (auto i:s)
             {
                 cout<<i<<"-->";
             }
             cout<<endl;
    
    auto it = s.begin();
    it++;
    it++;
    s.erase(it);
    s.insert(s.begin(), "Palo Alto");
//    auto it1 = s.begin();
//    it1++;
//    s.insert(it1,"Palo Alto");
    
    cout<<endl;
    
    for (auto i:s)
    {
        cout<<i<<"-->";
    }
    cout<<endl;
    
    
    return 0;
}
