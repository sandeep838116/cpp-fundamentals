//Take coordinates (x, y) and determine which quadrant the point lies in.
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the X-coordinate: ";
    cin>>x;
    cout<<"Enter the y-coordinate: ";
    cin>>y;

    if(x>0 && y>0) cout<<"Point lies in the first quadrant.";
    else if(x<0 && y>0) cout<<"Point lies in the second quadrant.";
    else if(x<0 && y<0) cout<<"Point lies in the third quadrant.";
    else if(x>0 && y<0) cout<<"Point lies in the fourth quadrant.";
    else cout<<"Point lies on the axis";
}