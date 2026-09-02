//Print all palindrome numbers between 1 and 500. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1;
    int cnt=0;
    while (i<=500)
    {
        int temp =i;
        int rev =0;
        while (temp)
        {
            int digit=temp%10;
            rev=rev*10+digit;
            temp/=10;
        }
        if(i==rev) {
            cout<<i<<endl;
            cnt++;
        }
        i++;
    }
    cout<<"count: "<<cnt;
}