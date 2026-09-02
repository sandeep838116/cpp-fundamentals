//Print all odd numbers between 1 and 100.
#include<iostream>
using namespace std;
int main(){
    int n=0;
    while (n<=100)
    {
        if(n%2!=0) cout<<n<<" ";
        n++;
    }
    
}