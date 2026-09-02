//For every number from 1 to n, count and print the total number of its factors. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        int cnt=0;
        for (int j=1;j<=sqrt(i);j++){
            if(j==sqrt(i)) cnt++;
            else if(i%j==0){
                cnt+=2;
            }
        }
        cout<<"Total number factors of "<<i<<" is "<<cnt<<endl;
    }
}