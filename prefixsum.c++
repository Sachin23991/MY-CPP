#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size of the array: ";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int d[n];
    int sum = 0;
    for(int i = 0;i<n;i++ ){
        
        sum += arr[i];
        d[i] = sum;
    }
    for(int i=0;i<n;i++){
        cout<<d[i]<<" ";
    }
}