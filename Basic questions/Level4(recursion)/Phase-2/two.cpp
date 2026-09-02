// Print numbers from n to 1 using recursion
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if(n==0)return;
    cout<<n<<endl;
    print(n-1);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    print(n);
}