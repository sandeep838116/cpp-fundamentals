//Take a 4-digit number and check if the first and last digits are equal
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int last=num%10;
    num/=1000;
    int first =num%10;

    if(first==last) cout<<"First is equal to last.";
    else cout<<"First is not equal to last.";
}