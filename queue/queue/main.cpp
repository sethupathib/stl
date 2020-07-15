//
//  main.cpp
//  queue
//
//  Created by Sethupathi on 26/03/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

//Here both queue and priority queue are demonstrated.

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    
    queue<int> q;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    int n,no;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>no;
        pq.push(no);
        
    }
    
    while(!pq.empty())
    {
        cout<<pq.top()<<"<-";
        pq.pop();
    }
    
    for(int i=1;i<=5;i++)
    {
        q.push(i);
    }

    while (!q.empty()) {
        cout<<q.front()<<" <- ";
        q.pop();
    }
    
    return 0;
}
