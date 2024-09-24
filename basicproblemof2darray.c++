#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    // Input the matrix
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Find the row with the maximum cumulative sum
    int maxSum = 0;
    int maxRowIndex = -1;
    for (int i = 0; i < rows; ++i) {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j) {
            rowSum += matrix[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRowIndex = i;
        }
    }

    // Print the result
    if (maxRowIndex != -1) {
        cout << "Row with maximum cumulative sum (index): " << maxRowIndex << endl;
    } else {
        cout << "No rows found." << endl;
    }

    return 0;
}
