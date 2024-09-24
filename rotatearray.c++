#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  /*  int n;
    cout<<"size";
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int rounds;
    cout<<"rounds";
    cin>>rounds;
    int star = rounds%n;
    int na[n];
    int j =0;
    for(int i = n-star ;i<n;i++){
        na[j++] = a[i];
        
    }
    for(int i = 0;i<=rounds;i++){
na[j++] = a[i];
    }
    for(int i = 0;i<n;i++){
        cout<<na[i];
    }
    NOW IT BECOME EASIER AS WE DO FROM VECTOR*/
    vector<int>v;
    int n;
    cin>>n;
    v.resize(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cout<<"Rounds upto which you want to rotate: ";
    cin>>k;
    reverse(v.begin(), v.end());

    // Step 2: Reverse the first k elements
    reverse(v.begin(), v.begin() + k);

    // Step 3: Reverse the remaining elements
    reverse(v.begin() + k, v.end());

    cout << "Rotated vector: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}