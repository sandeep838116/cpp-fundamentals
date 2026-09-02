//Find and print the sum of all factors of the given number. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int i=1;
    int sum=0;
    while(i<=sqrt(n)){
        if(i==sqrt(n)) sum = sum+i;
        else if(n%i==0) sum = sum+i+(n/i);
        i++;
    }
    cout<<sum;
}