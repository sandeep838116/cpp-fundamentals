//Check whether the given number is a palindrome.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int reverse=0;
    int num=n;
    do{
        int digit =n%10;
        reverse=reverse*10+digit;
        n/=10;
    }while(n);
    if(num==reverse) cout<<"Given number is a palindrome.";
    else cout<<"Given number is not a palindrome.";
}