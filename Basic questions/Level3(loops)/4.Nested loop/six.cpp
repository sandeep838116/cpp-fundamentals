//Generate and print a number triangle pattern using nested loops.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}