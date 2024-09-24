#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);
    int n;
    int m;
    n = a.size();
    m = b.size();
    if (n != m){
        cout<<"Not an anagram";
    }
    else{
        int temp;
     for(int i =0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if (a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
     }
     int tem;
     for(int i =0;i<m;i++){
        for(int j = i+1;j<n;j++){
            if (b[i]>b[j]){
                tem = b[i];
                b[i] = b[j];
                b[j] = tem;
            }
        }
     }
     
    }
    if (a == b){
        cout<<"Anagram";
    }
}

// for a string to be anagram those two string should be of same length and the word used in 
// both the string should be same and the order of the word should be same
//means count of each letter should same in both string