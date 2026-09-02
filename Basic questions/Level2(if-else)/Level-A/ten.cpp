// Write a program to read the age of a person and check whether they are eligible to vote.
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age of the person: ";
    cin>>age;
    
    if(age>=18){
        cout<<"You are eligible to vote.";
    }else{
        cout<<"You are not eligible.";
    }
}