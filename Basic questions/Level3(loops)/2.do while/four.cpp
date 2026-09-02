//Keep taking numbers from the user until 0 is entered, then print the largest number among all inputs
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int largest =INT_MIN;
    do{
        cout<<"Enter the number: ";
        cin>>n;
        if(n>largest) largest=n;
    }while (n!=0);
    cout<<"Largest number among all inputs is: "<<largest;
}