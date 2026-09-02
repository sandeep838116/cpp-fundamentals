// Find and print the sum of digits of the given number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int sum=0;
    while(num){
        int digit =num%10;
        sum+=digit;
        num/=10;
    }
    cout<<sum;
}