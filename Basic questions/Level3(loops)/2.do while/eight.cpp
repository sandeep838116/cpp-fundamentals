//Check whether the given number is an Armstrong number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    int num=n;
    int sum=0;
    int power=0;
    do{
        n/=10;
        power++;
    }while(n);
    n=num;
    do{
        int digit=n%10;
        int power_value=1;
        for(int i=1;i<=power;i++){
            power_value*=digit;
        }
        sum+=power_value;
        n/=10;
    }while (n);
    
    if (sum==num) cout<<"It is an amstrong number.";
    else cout<<"It is not an amstrong number.";
}