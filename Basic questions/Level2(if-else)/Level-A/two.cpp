// Write a program to read a number and check whether it is positive, negative or zero.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num<0) cout<<"It is negative number.";
    else if(num==0) cout<<"It is zero.";
    else cout<<"It is postive number.";
}