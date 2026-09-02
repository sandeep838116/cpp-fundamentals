//Print a matrix, then calculate and display the sum of each row and the sum of each column.

#include<bits/stdc++.h>
using namespace std;
int main() {
    // Define matrix dimensions
    const int rows = 3;
    const int cols = 3;

    // Initialize the matrix
    int matrix[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // 1. Print the matrix
    cout << "--- Matrix ---\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << setw(4) << matrix[i][j];
        }
        cout << "\n";
    }
    cout << "\n";

    // 2. Calculate and display the sum of each row
    cout << "--- Row Sums ---\n";
    for (int i = 0; i < rows; ++i) {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j) {
            rowSum += matrix[i][j];
        }
        cout << "Sum of Row " << i + 1 << " = " << rowSum << "\n";
    }
    cout << "\n";

    // 3. Calculate and display the sum of each column
    cout << "--- Column Sums ---\n";
    for (int j = 0; j < cols; ++j) {
        int colSum = 0;
        for (int i = 0; i < rows; ++i) {
            colSum += matrix[i][j];
        }
        cout << "Sum of Column " << j + 1 << " = " << colSum << "\n";
    }

    return 0;
}