#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cin.ignore(); // Consume the newline character

    string a[n];
    for (int i = 0; i < n; i++) {
        getline(cin, a[i]);
    }

    string temp;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout<<endl;
    int p = a[0].size();
    int q = a[n - 2].size();

    char g[p + 1] = {}; // Initialize arrays with zeros
    char h[q + 1] = {};

    for (int i = 0; i < p; i++) {
        g[i] = a[0][i];
    }

    for (int i = 0; i < q; i++) {
        h[i] = a[n - 2][i];
    }

    if (p < q) {
        for (int i = 0; i < p; i++) {
            if (g[i] == h[i]) {
                cout << g[i];
            }
        }
    } else if (p>q){
        for (int i = 0; i < q; i++) {
            if (g[i] == h[i]) {
                cout << g[i];
            }
        }
    }
    else{
        cout<<"No common element";
    }

    return 0;
}
