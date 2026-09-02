//Print "Start" only once and "End" only once using recursion.
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==0){
        cout<<"End"<<endl;
        return;
    }
    if(n==5) cout<<"Start"<<endl;
    print(n-1);
    cout<<n<<endl;;
}
int main(){
    print(5);
}