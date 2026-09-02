//Print even number from 1 to n using recursion
#include<bits/stdc++.h>
using namespace std;

void even(int n){
    if(n==0) return;
    even(n-1);
    if(n%2==0) cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter the even number: ";
    cin>>n;
    even(n);
}