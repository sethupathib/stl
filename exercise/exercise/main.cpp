//
//  main.cpp
//  exercise
//
//  Created by Sethupathi on 30/03/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

//#include<iostream>
//#include <cstring>
//using namespace std;
//int main() {
//
//    int n;
//    cin>>n;
//    cin.get();
//    string s[1000];
//    string s1 = "Bat";
//    string s2 = "Batman";
//    for(int i=0;i<n;i++)
//    {
//        getline(cin,s[i]);
//    }
//
//    sort(s,s+n);
//
//    for(int i=0;i<n;i++)
//    {
//       if(s[i+1].compare(0,sizeof(s[i+1]),s[i])==0)
//       cout<<s[i+1]<<endl;
////        cout<<s[i]<<endl;
//    }
//
////    if(s[i+1].compare(0,3,s1)==0)
////        cout<<"Match found"<<endl;
//
//
//    return 0;
//}

#include <iostream>
#include <algorithm>
using namespace std;


int compareTo(string s1, string s2) {

        int i = 0;

        while (i < s1.length() && i < s2.length()) {

            if (s1[i] > s2[i]) {

                return -1;
            } else if (s1[i] < s2[i]) {
                return 1;
            }
            i++;

        }

        if (s1.length() > s2.length()) {
            return -1;
        } else {
            return 1;
        }

    }
void sortfunc(string arr[], int n) {

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n - i - 1; j++) {

                if (compareTo(arr[j], arr[j + 1]) > 0) {

                    string temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }

            }
        }

    }

int main()
{

    int n;
    cin>>n;
    string* str = new string[n];
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    sortfunc(str, n);
    for(int i=0;i<n;i++)
    {
        cout<<str[i]<<endl;
    }
    return 0;
}
