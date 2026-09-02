//Take electricity units consumed and calculate the bill as per slabs (using if-else)
#include<iostream>
using namespace std;
int main(){
    int units;
    cout<<"Enter the units consumed: ";
    cin>>units;

    if(units<0) cout<<"Enter a valid unit.";
    else if(units<=100) cout<<"Your bill is: "<<units*3.5;
    else if(units>100 && units<=200){
        float bill=100*3.5 +(units-100)*5;
        cout<<"Your bill is: "<<bill;
    }else{
        float bill=100*3.5 + 100*5 +(units-200)*6.5;
        cout<<"Your bill is: "<<bill;
    }
}