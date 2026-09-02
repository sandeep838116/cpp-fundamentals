// Take three sides and check if they form a valid triangle.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first side: ";
    cin>>a;
    cout<<"Enter the second side: ";
    cin>>b;
    cout<<"Enter the third side: ";
    cin>>c;

    if(a<=0 ||b<=0 || c<=0){
        cout<<"Enter valid sides.";
    }
    else{
        if((a+b>c) && (a+c>b) && (b+c>a)){
            cout<<"These sides will form a triangle.";
        }
        else{
            cout<<"These sides will not form a triangle.";
        }
    }
}