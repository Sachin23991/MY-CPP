#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a >>b;
    
    for(int i = a;i<=b;i++){
        int flag = 1;
        for(int j = 2;j<i;j++){
            if (i%j == 0){
                flag = 0;
                break;
            }
        }
        if (flag == 1){
        cout<<i<<endl;
    }
    
    }
    
}