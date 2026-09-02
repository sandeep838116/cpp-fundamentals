//Take two angles of a triangle and compute the third angle.
#include<iostream>
using namespace std;
int main(){
    int angle1,angle2;
    cout<<"Enter the first angle: ";
    cin>>angle1;
    cout<<"Enter the second angle: ";
    cin>>angle2;

    if(angle1+angle1>=180) cout<<"You have given wrong angles(more than 180 degree)";
    else{
        cout<<"Third angle is: "<<180-(angle1+angle2);
    }
}