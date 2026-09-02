// Write a program to read a number and check whether it is even or odd.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num%2==0){
        cout<<"It is an even number.";
    }else{
        cout<<"It is an odd number.";
    }
}