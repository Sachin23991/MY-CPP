#include<iostream>
using namespace std;
int main(){
    int j;
    cin >> j;
    int sum =0;
    /*for(int i = 1;i<=j;i++){
        sum += i;
    }*/
    int i = 1;
    while(i<=j){
        sum += i;
        i++;
    }
    cout<<"Sum of the all natural number upto user's input: ";
    cout<<sum;
}