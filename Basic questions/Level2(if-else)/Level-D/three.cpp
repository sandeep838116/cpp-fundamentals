// Take two numbers and check if both are positive and their sum is less than 100. 
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    if(a<=0 || b<=0) cout<<"Given two numbers are not positive(both or one of them).";
    else if (a+b<100) cout<<"Given two numbers are postive and their sum is less than 100";
    else cout<<"Given numbers are positive but thier sum is greater than or equal to 100";
}