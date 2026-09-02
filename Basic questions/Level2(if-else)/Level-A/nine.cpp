// Write a program to check whether it is divisible by both 3 and 5
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if((num%3==0) && (num%5==0)){
        cout<<"Number is divisible by both 3 and 5.";
    }else{
        cout<<"Number is not divisible by both 3 and 5.";
    }
}