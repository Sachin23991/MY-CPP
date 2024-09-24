// code for adding numbers in reccursive way
/*#include<iostream>
using namespace std;
int f(int n){
    if(n > 0 && n<=9)return n;
    else return f(n/10)+n%10;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int result = f(n);
    cout<<result;
}*/




// We have to find p^q by using reccursive function
/*#include<iostream>
using namespace std;
int power(int a,int b){
    if(b == 0)return 1;
    else return a*power(a,b-1);
}
int main(){
    int p , q;
    cout<<"Enter the base and exponent: ";
    cin >> p >> q;
    int result = power(p,q);
    cout<<result;
}*/

// code for printing 1 to n
/*#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1); // Recursive call
        cout << n << " ";   // Print the current number
    }
}

int main() {
    int n;
    cout << "Enter a positive integer (n): ";
    cin >> n;

    cout << "Numbers from 1 to " << n << ": ";
    printNumbers(n);

    return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range of array: ";
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int temp;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if (a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 3;i>=2;i--){
        cout<<a[i]<<" ";
    }
   cout<< a[n-1]<<" ";
   for(int i = 0;i<2;i++){
    cout<<a[i]<<" ";
   }
   
}