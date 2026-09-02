// Check whether the given number is a prime number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    bool flag=true;
    int i=2;
    while(i<=sqrt(num)){
        if(num%i==0){
            flag=false;
            break;
        }
        i++;
    }
    if(flag) cout<<"Given number is a prime number.";
    else cout<<"Given number is not a prime number.";
}