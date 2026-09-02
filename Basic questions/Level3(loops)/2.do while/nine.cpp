//Calculate and print the factorial of the given number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int i=1;
    int fact =1;
    do{
        fact*=i;
        i++;
    }while(i<=n);
    cout<<fact;
}