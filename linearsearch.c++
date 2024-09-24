#include<iostream>
using namespace std;
int main(){
    cout<<"space of array: ";
    int n;
    cin>>n;
    cout<<endl;
    int number;
    cout<<"element which we have to find in array: ";
    cin>>number;
    int a[n];
    int falg = 0;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        if (number == a[i]){
            cout<<"element found at index: "<<i;
            falg++;
        }
        
    }
    if (falg == 0)cout<<"-1";
}