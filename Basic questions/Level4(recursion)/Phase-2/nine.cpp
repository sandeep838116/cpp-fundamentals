// Print the fibbonacci series upto n terms using recursion
#include<bits/stdc++.h>
using namespace std;

int fibb(int n){
    if(n<=1) return n;
    return fibb(n-1)+fibb(n-2);

}
int main(){
    int n;
    cout<<"Enter the term: ";
    cin>>n;
    
    cout << "Fibonacci Series: ";
    // Loop through each term from 0 to n-1 and print it
    for (int i = 0; i < n; i++) {
        cout << fibb(i) << " ";
    }
    cout << '\n';
}