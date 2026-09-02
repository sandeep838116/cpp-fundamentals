//Print the multiplication table of a given number from n × 1 to n × 10. 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int i=1;
    while(i<=10){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }
}