/*#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols];
    int r1, c1;
    int r2, c2;

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    cin >> r1 >> c1;
    cin >> r2 >> c2;

    int sum = 0;
    for (int i = r1; i <= r2; ++i) {
        for (int j = c1; j <= c2; ++j) {
            sum += matrix[i][j];
        }
    }

    cout << "Total Sum: " << sum << endl;
    return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the amount of number you want to store: ";
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

}