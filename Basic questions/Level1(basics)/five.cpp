#include<iostream>
using namespace std;
int main(){
    int length, breadth;
    cout<<"Enter the length of the rectangle: ";
    cin>>length;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>breadth;
    cout<<"Area of the rectangle is: "<<length*breadth<<endl;
    cout<<"Perimeter of the rectangle is: "<<2*(length+breadth);
}