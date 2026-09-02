// Print numbers from 1 to n before the recursive call.
#include<bits/stdc++.h>
using namespace std;
void print(int n,int i){
    if (n==0) return;
    cout<<i+1-n<<endl;
    print(n-1,i);
}
int main(){
    print(10,10);
}