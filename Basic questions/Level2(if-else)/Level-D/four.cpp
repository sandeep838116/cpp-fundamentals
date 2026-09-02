//Take a single digit (0–9) and print its word form (“Zero” to “Nine”). 

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the digit: ";
    cin>>num;

    switch (num)
    {
    case 0:
        cout<<"Zero";
        break;
    case 1:
        cout<<"One";
        break;
    case 2:
        cout<<"Two";
        break;
    case 3:
        cout<<"Three";
        break;
    case 4:
        cout<<"Four";
        break;
    case 5:
        cout<<"Five";
        break;
    case 6:
        cout<<"Six";
        break;
    case 7:
        cout<<"Seven";
        break;
    case 8:
        cout<<"Eight";
        break;
    case 9:
        cout<<"Nine";
        break;
    
    default:
        break;
    }
}