#include<iostream>
using namespace std;
int main(){
    int row , column;
    cout<<"Enter the number of rows: ";
    cin>> row;
    cout<<"Enter the number of columns: ";
    cin>>column;
    int a[row][column];
    int b[column][row];
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            b[j][i]=a[i][j];
        }
    }
     for(int i = 0;i<column;i++){
        for(int j = 0;j<row;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"After rotation: "<<endl;
    for(int i = 0;i<column;i++){
        for(int j = row-1;j>=0;j--){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}