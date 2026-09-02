//Take three numbers and check if they are in arithmetic progression. 
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;

    if((b-a)==(c-b)) cout<<"It is an arithematic progression.";
    else cout<<"It is not in arithematic progression.";
}