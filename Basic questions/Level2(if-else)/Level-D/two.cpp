//Take 24-hour time (hours and minutes) and print whether it is AM or PM. 

#include<iostream>
using namespace std;
int main(){
    int hrs,mins;
    cout<<"Enter the hour: ";
    cin>>hrs;
    cout<<"Enter the minutes: ";
    cin>>mins;

    if(hrs>23 || hrs<0 || mins<0 || mins>59){
        cout<<"Enter a valid time.";
    }else{
        if(hrs<12 && mins<=59){
            cout<<"AM";
        }else{
            cout<<"PM";
        }
    }
}