//Check whether a given integer is single-digit, double-digit, or multi-digit.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num/10==0) cout<<"Given number is single-digit.";
    else if(num/100==0) cout<<"Given number is double-digit.";
    else cout<<"Given number is multi-digit.";
}