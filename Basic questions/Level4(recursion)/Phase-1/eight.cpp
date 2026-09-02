//Print the current value of n during each recursive call
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    cout<<n<<endl;
    if(n==0) return;
    print(n-1);
}
int main(){
    print(5);
}