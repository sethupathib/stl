//
//  main.cpp
//  merge_two_arrays
//
//  Created by Sethupathi on 02/04/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//
//Merging 2 arrays in sorted order using a 3rd array
#include <iostream>
#include <algorithm>

using namespace std;


void mergearray(int arr1[],int n1,int arr2[],int n2,int arr3[])
{
    int i=0,j=0,k=0;
    
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else arr3[k++] = arr2[j++];
    }
    
    while(i<n1)
    {
        arr3[k++] = arr1[i++];
    }
    
    while(j<n2)
    {
        arr3[k++] = arr2[j++];
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    
    int arr1[] = {1,3,5,7,9};
    int n1 = sizeof(arr1)/sizeof(int);
    int arr2[] = {2,4,6,8,10};
    int n2 = sizeof(arr2)/sizeof(int);
    int arr3[n1+n2];
    
    mergearray(arr1,n1,arr2,n2,arr3);
//    merge(arr1,arr1+n1,arr2,arr2+n2,arr3);
    cout<<"After Merging the arrays in sorted order"<<endl;
    
    for(int i=0;i<n1+n2;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    
    cout<<arr3[(n1+n2)/2 -1];
    return 0;
}
