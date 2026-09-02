//Check if a number lies within the range [100, 999]. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num>=100 && num<=999) cout<<"Number lies between [100,999].";
    else cout<<"Number doesn't lie between [100,999],";
}