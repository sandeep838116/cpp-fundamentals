// Find X^n (power of a number) using recursion
#include <bits/stdc++.h>
using namespace std;

int power(int x, int n){
    if(n==1) return x;
    return x*power(x,n-1);
}
int main(){
    int x,n;
    cout<<"Enter the base: ";
    cin>>x;
    cout<<"Enter the power: ";
    cin>>n;
    cout<<power(x,n);
}