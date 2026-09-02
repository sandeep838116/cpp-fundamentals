// Print all prime numbers between 1 and 100. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=2;
    while(n<=100){
        bool flag = true;
        int i=2;
        while(i<=sqrt(n)){  
            if(n%i==0){
                flag=false;
                break;
            }
            i++;
        }
        if(flag) cout<<n<<" ";
        n++;
    }
}