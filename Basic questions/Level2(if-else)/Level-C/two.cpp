//Take a 3-digit number and determine if the middle digit is the largest, smallest, or neither. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int one=num%10;
    num/=10;
    int ten=num%10;
    num/=10;
    int hundred =num%10;

    if(ten>=one && ten>=hundred) cout<<"Middle is the largest.";
    else if(ten<=one && ten<=hundred) cout<<"Middle is the smallest.";
    else cout<<"Neither";
}