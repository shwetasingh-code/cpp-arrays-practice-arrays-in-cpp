#include<iostream>
using namespace std;
 int main(){
      int n;
       cout <<"enter size of array";
       cin>>n;
       int arr[n];
       int sum=0;
       cout<<"enter element of array";
       for(int i=0;i<n;i++){
           cin>>arr[i];
            sum =sum +arr[i];
       }
      
    float average=float (sum)/n;
       cout<<"average" <<average<<endl;
       return 0;
 }
