//Reverse the given number and print the reversed value
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int reverse=0;
    do{
        int digit = n%10;
        reverse=reverse*10+digit;
        n/=10;
    }while(n);
    cout<<reverse;
}