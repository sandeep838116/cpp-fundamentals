//Check whether a number is a perfect square (without using the square root function). 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int sum=0;
    for(int i=1;i<=num;i+=2){   // Note:--A unique mathematical property states that every perfect square is equal to the sum of consecutive odd numbers starting from 1.
        if(sum==num){
            cout<<"It is a perfect square.";
            break;
        }else if (sum>num){
            cout<<"It is not a perfect square.";
            break;
        }
        else sum+=i;

    }
}