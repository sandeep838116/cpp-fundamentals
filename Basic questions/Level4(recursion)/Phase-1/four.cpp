// print "Before call" and "after call " to observe the call order.
#include<bits/stdc++.h>
using namespace std;

void call(int n){
    if(n==0) return;
    cout<<"Before call"<<endl;
    call(n-1);
    cout<<"After call"<<endl;
}
int main(){
    call(3);
}