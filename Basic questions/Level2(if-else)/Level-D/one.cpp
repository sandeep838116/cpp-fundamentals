//Take three numbers and print the median value (neither maximum nor minimum).
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the sencond number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;

    int median;
    if ((a >= b && a <= c) || (a >= c && a <= b)) median = a;
    else if ((b >= a && b <= c) || (b >= c && b <= a)) median = b;
    else median = c;
    cout << "Median = " << median << endl;
    
}