// print hello world 5 times using recursion 
#include <bits/stdc++.h>
using namespace std;
void print(int n){
    if (n==0) return;
    cout<<"Hello World"<<endl;
    print(n-1);
}
int main(){
    print(5);
}