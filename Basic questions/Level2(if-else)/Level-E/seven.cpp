//Take a 3-digit number and check if the sum of the first and last digit equals the middle digit.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int a,b,c;
    a =num%10;
    num/=10;
    b=num%10;
    num/=10;
    c=num;

    if(a+c==b) cout<<"The sum of first and last digit equals to the middle.";
    else cout<<"The sum of first and last digit does not equals to the middle.";
}