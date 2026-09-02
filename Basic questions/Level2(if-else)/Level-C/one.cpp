//Take a 3-digit number and check if all digits are distinct. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    int ones = (num%10);
    num/=10;
    int ten =(num%10);
    num/=10;
    int hundred =(num%10);

    if(ones!=ten && ten!=hundred && ones!=hundred) cout<<"All digits are distinct.";
    else cout<<"All digits are not distinct.";
}