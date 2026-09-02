//Print odd numbers from 1 to n using recursion
#include<bits/stdc++.h>
using namespace std;

void odd(int n){
    if(n==0) return;
    odd(n-1);
    if(n%2!=0) cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    odd(n);
}