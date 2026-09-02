// Write a program to read three numbers and find the smallest among them.

#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;

    if(a==b && b==c) cout<<"All numbers are equal.";
    else if ((a<b && b<c) || (a<b && b==c)) cout<<"First number is smallest.";
    else if ((b<a && b<c) || (b<a && a==c)) cout<<"Second number is smallest.";
    else if ((c<a && b<c) || (c<a && a==b)) cout<<"Third number is the smallest.";
    else if (a==b && a<c) cout<<"First and second number are equal and smallest.";
    else if (a==c && a<b) cout<<"First and third number are equal and smallest.";
    else if (b==c && c<a) cout<<"Second and third number are equal and smallest.";
}