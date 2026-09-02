//Calculate and print the factorial of a given number.
#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    long long pro=1;
    cout<<"Enter the number: ";
    cin>>n;

    while(i<=n){
        pro*=i;
        i++;
    }
    cout<<pro;
}