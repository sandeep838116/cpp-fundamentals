//Find the LCM (Least Common Multiple) of two given numbers. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    int a1=a;
    int b1=b;

    int c=1;
    if(a==b){
        cout<<a;
        return 0;
    }else if(a>b){
        while(c){
            c=a%b;
            if(a%b==0){
                int lcm =(a1*b1)/b;
                cout<<lcm;
                return 0;
            }
            a=b;
            b=c;
        }
    }else{
        while(c){
            c=b%a;
            if(b%a==0){
                int lcm =(a1*b1)/a;
                cout<<lcm;
                return 0;
            }
            b=a;
            a=c;
        }
    }
}