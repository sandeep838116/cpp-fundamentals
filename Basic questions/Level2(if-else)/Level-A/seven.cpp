// Write a program to read a character and check whether it is an alphabet,digit or special character.
#include<iostream>
using namespace std;
int main(){
    char cha;
    cout<<"Enter the character: ";
    cin>>cha;
    if((cha>='a'&& cha<='z')||(cha>='A' && cha<='Z')){
        cout<<"It is an alphabet.";
    }else if(cha>='0' && cha<='9'){
        cout<<"It is a digit.";
    }else{
        cout<<"It is a special character.";
    }
}