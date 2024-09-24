// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no of students: ";
//     cin>>n;
//     int a[n];
//     for(int i =0;i<n;i++){
//         cin>>a[i];
//     }
//     int max = a[0];
//     for(int i  = 0;i<n;i++){
//         if(max>a[i]){
//             max = a[i];
//         }
//     }
//     int min = a[0];
//     for(int i  = 0;i<n;i++){
//         if(min<a[i]){
//             min = a[i];
//         }
//     }
//     cout<<"MAX: "<<max<<endl;
//     cout<<"MIN: "<<min<<endl;
//     int sum = 0;
//     for(int i =0;i<n;i++){
//         sum += a[i];
//     }
//     double avg = sum/n;
//     cout<<"AVG: "<<avg;

// }
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector <int> a(n);
//     for(int i =0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i = 0 ;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     sort(a.begin(),a.end());
//     for(int i = 0 ;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
