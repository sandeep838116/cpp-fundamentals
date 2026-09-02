//Take three numbers and check if they can form a Pythagorean triplet.
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

    int first = (a*a)+(b*b);
    int second = (a*a)+(c*c);
    int third = (b*b)+(c*c);

    if((first==(c*c)) || (second==(b*b)) || (third==(a*a))) cout<<"It is a pythagorous triplet";
    else cout<<"It is not a pythagorous triplet.";
}