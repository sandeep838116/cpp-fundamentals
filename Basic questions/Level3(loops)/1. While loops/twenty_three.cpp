// Print all numbers between a and b that are divisible by 7.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    int i=a+1;
    while(i<b){
        if(i%7==0){
            cout<<i<<" ";
        }
        i++;
    }
}