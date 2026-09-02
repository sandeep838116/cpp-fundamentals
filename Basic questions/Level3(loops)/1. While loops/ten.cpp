//Find and print the product of all digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int n;
    int pro=1;
    cout<<"Enter the number: ";
    cin>>n;
    
    while(n){
        int digit =n%10;
        pro*=digit;
        n/=10;
    }
    cout<<pro;
}