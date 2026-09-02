//Print the cube of each number from 1 to n. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to which you want to cube the numbers: ";
    cin>>n;

    int i=1;
    while(i<=n){
        int cube =i*i*i;
        cout<<cube<<' ';
        i++;
    }
}