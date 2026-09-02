//Check if a number is a multiple of 7 or ends with 7.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num%7==0 && num%10==7) cout<<"Given number is both multiple of 7 and ends with 7.";
    else if(num%7==0) cout<<"Given number is a multiple of 7.";
    else if(num%10==7) cout<<"Given number ends with 7";
    else cout<<"Neither is multiple of 7 nor ends with 7.";
}