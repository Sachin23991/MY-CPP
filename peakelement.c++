#include<iostream>
using namespace std;
int main(){
    int size;
cout<<"Enter the size of the array: ";
cin>>size;
int a[size];
for(int i = 0;i<size;i++){
    cin>>a[i];
}
int greatestelement  = a[0];
int peakelement = a[0];
for(int i = 0;i<size;i++){
    if(a[i]>a[i-1] && a[i]>a[i+1]){
        peakelement = a[i];
        cout<<"Peak elements: "<<peakelement<<endl;
    }
    if (a[i]>greatestelement){
        greatestelement = a[i];
    }
}

cout << "Greatest element: " << greatestelement << endl;
}