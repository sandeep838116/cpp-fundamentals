// Print numbers from 1 to n after the recursive call;
# include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<endl;
}
int main(){
    print(5);
}