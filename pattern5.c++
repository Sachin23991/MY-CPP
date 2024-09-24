#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i = 1;i<=row;i++){
        for(int j = 1;j<=(row-i);j++){
            cout<<" ";//this code is use for space as space are equal to (input-rownumber) before star
        }
        for(int j =1 ;j<=(2*i-1);j++){
            cout<<"*";// this code is use for star as number of stars are equal to (2*rownumber-1)
        }
        cout<<endl;
    }
}