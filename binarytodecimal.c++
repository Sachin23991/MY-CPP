#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dec = 0;
    int power= 1;
    while(n>0){
        int rem = n%10;
        dec = dec+rem*power;
        power *= 2;
        n /= 10;
    }
    cout<<dec;
}