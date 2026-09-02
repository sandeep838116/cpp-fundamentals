//Check if one of two given numbers is a multiple of the other.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    if(a%b==0){
        cout<<"first number is multiple of second.";
    }else if(b%a==0){
        cout<<"Second number is multiple of first.";
    }else{
        cout<<"These are not multiple of each other.";
    }
}