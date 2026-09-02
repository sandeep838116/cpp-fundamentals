//Print the Fibonacci pattern row by row, where each row prints the next Fibonacci numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the term: ";
    cin>>n;

    int a=0;
    int b=1;
    for(int row=1;row<=n;row++){
        for(int i=1;i<=row;i++){
            cout<<a<<" ";
            int next_term =a+b;
            a=b;
            b=next_term;
        }
        cout<<endl;
    }
}