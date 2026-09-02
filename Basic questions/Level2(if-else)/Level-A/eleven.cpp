// Take a temperature value and print "Cold","Warm"or "Hot" using range condition.
#include<iostream>
using namespace std;
int main(){
    int temp;
    cout<<"Enter the temperature: ";
    cin>>temp;

    if(temp<=20){
        cout<<"Cold.";
    }else if(temp>20 && temp<=80){
        cout<<"Warm.";
    }else{
        cout<<"Hot.";
    }
}