//Calculate the sum of all odd numbers from 1 up to n.
#include<iostream>
using namespace std;
int main(){
    int n;
    int i=0;
    int sum=0;
    cout<<"Enter the number: ";
    cin>>n;

    while(i<=n){
        if(i%2!=0) sum+=i;
        i++;
    }
    cout<<sum;
}