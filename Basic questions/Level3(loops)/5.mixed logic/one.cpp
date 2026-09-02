//Print all numbers between 1 and 100 whose sum of digits is even. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1;
    while(i<=100){
        int sum=0;
        int temp =i;
        while (temp)
        {
            int digit=temp%10;
            sum+=digit;
            temp/=10;
        }
        if(sum%2==0) cout<<i<<endl;
        i++;
    }
}