// Keep taking numbers from the user until 0 is entered, then print the sum of all entered numbers.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int sum=0;
    do{
        cout<<"Enter the number: ";
        cin>>n;
        sum+=n;
    }while (n!=0);
    cout<<sum;
}