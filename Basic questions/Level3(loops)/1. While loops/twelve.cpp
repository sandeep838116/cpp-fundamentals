// Reverse the given number and print the reversed value.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int reverse=0;
    while(num){
        int digit=num%10;
        reverse=reverse*10+digit;
        num/=10;
    }
    cout<<reverse;
}