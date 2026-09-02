//Print all Pythagorean triplets whose values are less than or equal to n. 

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the maximum value (n): ";
    cin >> n;

    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) {
            
            int c_square = (a * a) + (b * b);
            int c = sqrt(c_square); 
            
            if (c <= n && (c * c) == c_square) {
                cout << "(" << a << ", " << b << ", " << c << ")\n";
            }
        }
    }

    
}