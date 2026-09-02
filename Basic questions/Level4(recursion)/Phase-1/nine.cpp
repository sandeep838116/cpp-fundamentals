// Write a recursive function that stops only when n==0
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if (n==0) return;
    cout<<n;
    print(n-1);
}
int main(){
    print(5);
}