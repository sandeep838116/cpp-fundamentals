//Calculate and print the sum of the first n natural numbers. 
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the number: ";
    cin>>n;

    int i=1;
    while (i<=n)
    {
        sum+=i;
        i++;
    }

    // sum = (n*(n+1))/2;
    cout<<sum;
}