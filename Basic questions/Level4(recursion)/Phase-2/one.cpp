// Print numbers from 1 to n using recursion
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if (n==0) return;
    print(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    print(n);
}