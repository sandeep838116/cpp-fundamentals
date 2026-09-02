//Take the hour of the day (0–23) and print “Good Morning”, “Good Afternoon”, “Good Evening”, or “Good Night”. 
#include<iostream>
using namespace std;
int main(){
    int hrs;
    cout<<"Enter the hour: ";
    cin>>hrs;

    if(hrs<0){
        cout<<"Enter a valid hour.";
    }else{
        if(hrs>5 && hrs<11){
            cout<<"Good Morning.";
        }else if(hrs>=11 && hrs<16){
            cout<<"Good Afternoon.";
        }else if(hrs>=16 && hrs<20){
            cout<<"Good Evening.";
        }else{
            cout<<"Good Night.";
        }
    }
}