//Take coordinates (x, y) and check if the point lies on the X-axis, Y-axis, or at the origin. 
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the x-coordinate: ";
    cin>>x;
    cout<<"Enter the y-coordinate: ";
    cin>>y;

    if(x==0 && y==0) cout<<"Point lies on the origin.";
    else if(x==0) cout<<"Point lies on y-axis.";
    else if(y==0) cout<<"Point lies on x-axis.";
    else cout<<"Point does not lie on the axis or origin.";
}