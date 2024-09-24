#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n], b[n][n], c[n][n];

    // Input matrix a
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    // Input matrix b
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }

    // Initialize matrix c to 0
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Output the result matrix c
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
