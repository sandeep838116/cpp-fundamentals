// Check whether the given number is a Perfect number.
//A perfect number is a positive integer that is equal to the sum of its positive proper divisors (excluding the number itself).

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int sum=0;
    int i =1;
    while(i<num){
        if(num%i==0){
            sum+=i;
        }
        i++;
    }
    if(num==sum){
        cout<<"This is a perfect number.";
    }else{
        cout<<"This is not a perfect number.";
    }
}