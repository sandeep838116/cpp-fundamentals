// Print the square of each number from 1 to n.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to which you want to find square: ";
    cin>>n;

    int i=1;
    while(i<=n){
        int square = i*i;
        cout<<square<<' ';
        i++;
    }
}