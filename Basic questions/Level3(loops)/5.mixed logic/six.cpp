//Print a pattern where the i-th row prints the value i × i. 
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Total number of rows
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (i * i) << " ";
        }
        cout << endl; // Move to the next row
    }
    return 0;
}
