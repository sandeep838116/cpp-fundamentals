#include<iostream>
using namespace std;
int main(){
    int sec;
    cout<<"Enter the seconds: ";
    cin>>sec;

    int hours = sec/3600;
    int remaining_sec = sec - (hours*3600);
    int mins = remaining_sec/60;
    remaining_sec = remaining_sec-(mins*60);

    cout<<hours<<" "<<"hrs"<<mins<<" "<<"mins"<<remaining_sec<<" "<<"secs";
}