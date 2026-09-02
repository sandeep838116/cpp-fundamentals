//Count and print the number of digits in the given number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int cnt=0;
    cout<<"Enter the number: ";
    cin>>n;

    do{
        n/=10;
        cnt++;
    }while(n);
    cout<<cnt;
}