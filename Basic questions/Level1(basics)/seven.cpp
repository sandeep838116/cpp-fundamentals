#include <iostream>
using namespace std;
int main(){
    int first, second;
    cout<<"Enter the first number : ";
    cin>>first;
    cout<<"Enter the second number : ";
    cin>>second;

    // Method 1
    // first = first + second;
    // second = first - second;
    // first = first - second;
    
    // Method 2 
    first = first^second;
    second = first^second;
    first = first^second;
    
    cout<< "Your swapped number are: "<<first<<" "<<second;

}