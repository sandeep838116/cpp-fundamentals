// Check whether the given number is a palindrome
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int n = num;
    int reverse=0;
    while(num){
        int digit=num%10;
        reverse=reverse*10+digit;
        num/=10;
    }
    if(n==reverse) cout<<"This given number is palindrome.";
    else cout<<"This is not a palindrome.";
}