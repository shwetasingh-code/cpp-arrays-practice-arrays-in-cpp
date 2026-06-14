#include<iostream>
using namespace std;
 int main(){
     int n;
     cout<<"enter size of array";
     cin>>n;
     int arr[n];
     cout<<"enter elment of array";
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     int key;
      cout<<"enter your target";
      cin>>key;
      for(int i=0;i<n;i++){
          if(arr[i]==key){
              cout<<"elment is found";
              return 0;
          }
      }
      cout<<"elemnt is not found";
      return 0;
 }
