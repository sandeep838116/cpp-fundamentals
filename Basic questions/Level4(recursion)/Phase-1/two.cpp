// Print numbers from 1 to 5 using recursion without parameters
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if (n==0) return;
    cout<<6-n<<endl;
    print(n-1);
}
int main(){
    print(5);
}