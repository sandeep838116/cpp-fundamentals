// Print the Fibonacci series up to n terms.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    
    int i=0;
    int j=1;
    int cnt=0;
    while(cnt<n){
        cout<<i<<" ";
        int sum=i+j;
        i=j;
        j=sum;
        cnt++;
    }
}