//Print the multiplication table of a given number. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=1;
    do{
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }while(i<=10);
}