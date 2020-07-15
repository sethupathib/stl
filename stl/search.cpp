#include <iostream>
#include <algorithm>
using namespace std;


int main()

{

//cout<<"Hello Competitive Programming World"<<endl;

int arr[] = {1,10,11,9,100};
int n = sizeof(arr)/sizeof(int);

//int key = 11;

int key;

cin>>key;

auto it = find(arr,arr+n,key);

cout<<"Element  "<<key<<"   at  "<<"Position  "<<it-arr<<"\t";

return 0;
}
