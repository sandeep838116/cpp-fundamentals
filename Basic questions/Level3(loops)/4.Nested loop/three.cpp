//Print all prime numbers up to n using nested loop checking. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=2;i<n;i++){
        int cnt=0;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                cnt++;
                break;
            }

        }
        if(cnt==0) cout<<i<<" ";
    }
}