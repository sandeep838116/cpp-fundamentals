// Count and print the total number of digits in a given number. 
#include <bits/stdc++.h>
using namespace std; 
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int count=0;
    while(num){
        num/=10;
        count++;
    }
    cout<<count;
}
