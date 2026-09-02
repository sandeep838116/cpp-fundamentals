//Take time (hours and minutes) and print the smaller angle between the hour and minute hands.

// The minute hand moves 6° per minute, while the hour hand moves 0.5° per minute. Thus, the hour hand's angle is calculated as hrAngle = 30 × H + 0.5 × M, and the minute hand's angle as minAngle = 6 × M. The difference between the two angles is diff = |hrAngle - minAngle|.

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int hrs,mins;
    float angle;
    cout<<"Enter the hour: ";
    cin>>hrs;
    cout<<"Enter the minutes: ";
    cin>>mins;

    if(hrs<1 ||hrs>12 || mins<1 || mins>59){
        cout<<"Enter a valid time.";
    }else{
        if(hrs==12) hrs=0;
        float mins_pos = mins*6;
        float hrs_pos = (hrs*30)+(mins*0.5);
        angle = abs(mins_pos-hrs_pos);
        if(angle>180) angle=360-angle;
        cout<<angle;
    }
}