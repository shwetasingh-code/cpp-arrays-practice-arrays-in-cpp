#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    cout<<"enter element of array";
    for(int i=0; i<n;i++){ //for countisely enter the element
        cin>>arr[i];
        
    }
    int start=0;
    int end=n-1;
    while(start<end){ //while is used to reverse the element in array
        swap(arr[start],arr[end]);
        start=start+1;
        end=end-1;
        
    }
    cout<<"reverse element of array";
    for(int i=0;i<n;i++){ //it's help to print the reverse element in the output
        cout<<arr[i]<<" ";
        return 0;
    }
}
