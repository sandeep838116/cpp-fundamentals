//Find and print the sum of the Fibonacci series up to n terms.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number terms: ";
    cin>>n;

    int sum=0;
    int i=0;
    int j=1;
    int cnt=0;
    while (cnt<n)
    {
        sum+=i;
        int temp_sum=i+j;
        i=j;
        j=temp_sum;
        cnt++;
    }
    cout<<sum;
}