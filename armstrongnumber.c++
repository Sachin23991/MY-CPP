#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int  j = n;
    int x = n;
    int length = 0;
    while(n>0){
        n = n/10;
        length++;
    }
    int sum = 0;
    while(x>0){
        int left = x%10;
        sum += pow(left,length);
        x /= 10;
    }
    if(sum == j)cout<<"The number is an armstrong number";
    else cout<<"The given number is not an armstrong number";
    

}