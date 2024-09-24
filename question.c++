/*for finding index upto prefix sum is equal to suffix sum
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size of the array: ";
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        sum += a[i];
    }
    int prefix = 0;
    for(int i = 0;i<n;i++){
        prefix += a[i];
        int suffix = sum-prefix;
        if (prefix == suffix){
            cout<<"Index: "<<i<<endl;
        }
    }
}*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int starin , endin,sum = 0;
    cin>>starin;
    cin>>endin;
    for(int i = starin ;i<=endin;i++){
        sum += arr[i];
    }
    cout<<"Sum of the given range: "<<sum;
}