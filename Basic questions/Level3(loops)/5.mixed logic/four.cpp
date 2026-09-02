//Print all numbers from 1 to 100 whose sum of digits is a multiple of 3.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1;
    while (i<=100)
    {
        int temp =i;
        int sum=0;
        while (temp)
        {
            int digit = temp%10;
            sum+=digit;
            temp/=10;
        }
        if(sum%3==0) cout<<i<<endl;
        i++;
    }
    
}