//Find the smallest digit in the given number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    n=abs(n);   //for negative numbers.

    int smallest=n%10;
    while(n){
        int digit =n%10;
        if(smallest>digit) smallest=digit;
        n/=10;
    }
    cout<<smallest;
}