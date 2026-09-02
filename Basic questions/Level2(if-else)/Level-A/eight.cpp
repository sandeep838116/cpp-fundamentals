// Write a program to read the marks of a student and print the grade(A/B/C/D/Fail)
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;

    if(marks<0 || marks>100){
        cout<<"Enter a valid marks between 0 and 100";
    }else{
        if(marks>=0 && marks<34){
            cout<<"Fail.";
        }else if(marks>=34 && marks<61){
            cout<<"D";
        }else if(marks>=61 && marks<81){
            cout<<"C";
        }else if(marks>=81 && marks<91){
            cout<<"B";
        }else{
            cout<<"A";
        }
    }
}