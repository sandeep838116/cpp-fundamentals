//Find the HCF (Highest Common Factor) of two given numbers.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    if(a==b){
        cout<<a;
        return 0;
    }else if(a>b){
        int c=1;
        while(c){
            c=a%b;
            if(a%b==0){
                cout<<b;
                return 0;
            }
            a=b;
            b=c;
        }
    }else{
        int c=1;
        while(c){
            c=b%a;
            if(b%a==0){
                cout<<a;
                return 0;
            }
            b=a;
            a=c;
        }
    }
}