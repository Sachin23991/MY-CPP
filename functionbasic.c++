#include<iostream>
using namespace std;
void change(int z){
    z = 100;
}
int main(){
    int a = 5;
    change(a);
    cout<<a;
}