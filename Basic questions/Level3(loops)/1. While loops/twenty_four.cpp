//Print all factors of the given number. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int i=1;
    while(i<=sqrt(num)){
        if(i==sqrt(num)) cout<<i<<" ";
        else if(num%i==0){
            cout<<i<<" "<<num/i<<" ";
        }
        i++;
    }
}