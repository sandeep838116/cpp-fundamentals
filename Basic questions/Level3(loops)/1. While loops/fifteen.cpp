//Check whether the given number is an Armstrong number. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int n=num;
    int sum=0;
    while(num){
        int digit=num%10;
        sum+=(digit*digit*digit);
        // cout<<digit<<" "<<pow(digit,3)<<" "<<sum<<endl;
        num/=10;
    }
    if (n==sum) cout<<"This is an amstrong number.";
    else cout<<"This is not an amstrong number.";
}