#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
    return a>b;
}
int main(){
   vector<int> arr{1,7,6,9,22,5};
   int a[]= {5,3,10,7,2,5};
   int n = sizeof(a)/sizeof(int);
   int size = sizeof(arr)/sizeof(int);
   //unsorted array
   for(int i=0;i<size;i++)
      cout<<arr[i]<<" ";
   cout<<endl;
   sort(a,a+n,compare);
   sort(arr.begin(),arr.begin()+size,compare);  
   //sorted array 
   for(int i=0;i<size;i++)
      cout<<arr[i]<<" ";
   cout<<endl;
   for(int i=0;i<n;i++)
      cout<<a[i]<<" "; 

   return 0;
}