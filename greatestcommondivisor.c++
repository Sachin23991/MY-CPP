#include<iostream>
using namespace std;
int main(){
    int num1 , num2 ;
    cout << "Enter two numbers: ";
    cin>>num1 >> num2;
    int sum = num1 + num2 ;
    int a[sum];
    int j = 0;
    if(num1<num2){
        for(int i  = 1 ;i<= num1 ;i++){
            if(num1 % i == 0 && num2 % i == 0){
                a[j] = i;
                j++;
            }
        }
    }
    else{
        for(int i = 1 ;i<num2;i++){
            if(num1 % i == 0 && num2 % i == 0){
                a[j] = i;
                j++;
            }
        }
    }
    for(int i = 0;i<j;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"The greatest common divisor is: "<<a[j-1];
}