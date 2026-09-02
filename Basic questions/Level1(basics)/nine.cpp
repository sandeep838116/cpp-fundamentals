#include<iostream>
using namespace std;
int main(){
    int first , second, third, fourth, fifth;
    cout<<"Enter the first number: ";
    cin>>first;

    cout<<"Enter the second number: ";
    cin>>second;

    cout<<"Enter the third number: ";
    cin>>third;

    cout<<"Enter the fourth number: ";
    cin>>fourth;

    cout <<"Enter the fifth number: ";
    cin>>fifth;

    int average = (first+second+third+fourth+fifth)/5;
    cout<<"Average of the numbers you entered is: "<<average;
}