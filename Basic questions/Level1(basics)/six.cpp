#include<iostream>
using namespace std;
int main(){
    int first, second, third;
    cout<<"Enter first number: ";
    cin>>first;
    cout<<"Enter second number: ";
    cin>>second;
    third = first;
    first =second;
    second = third;
    cout<<"Your swapped variables are: "<<first<<" "<<second;
}