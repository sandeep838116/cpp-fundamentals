//Check if an amount can be evenly divided into 2000, 500, and 100 currency notes. 
#include<iostream>
using namespace std;
int main(){
    int amount;
    int two_thou=0;
    int five_hund=0;
    int hund=0;
    cout<<"Enter the amount: ";
    cin>>amount;

    if (amount<100) cout<<"Amount is less than smallest currency, so cannot divide.";
    else if (amount%100!=0) cout<<"Amount cannot be divided into desired currencies.";
    else{
        if(amount>=2000){
            two_thou =amount/2000;
            amount=amount%2000;
            five_hund=amount/500;
            amount%=500;
            hund=amount/100;
            cout<<"Two thousand notes: "<<two_thou<<endl;
            cout<<"Five hundred notes: "<<five_hund<<endl;
            cout<<"One hundred notes: "<<hund;
        }
        else if(amount>=500){
            five_hund=amount/500;
            amount%=500;
            hund=amount/100;
            cout<<"Two thousand notes: "<<two_thou<<endl;
            cout<<"Five hundred notes: "<<five_hund<<endl;
            cout<<"One hundred notes: "<<hund;
        }
        else{
            hund=amount/100;
            cout<<"Two thousand notes: "<<two_thou<<endl;
            cout<<"Five hundred notes: "<<five_hund<<endl;
            cout<<"One hundred notes: "<<hund;
        }
    }
}