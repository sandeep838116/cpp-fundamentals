//Take a password string and check basic rules (length ≥ 8 and contains at least one digit)
#include<iostream>
#include<string>
using namespace std;
int main(){
    string password;
    bool isDigit=false;
    cout<<"Enter the password: ";
    cin>>password;

    for(int i=0;i<password.length();i++){
        char ch= password[i];
        if(isdigit(ch)){
            isDigit=true;
            break;
        }
    }

    if(password.length()>=8 && isDigit==true){
        cout<<"Your password is valid.";
    }else if(password.length()>=8 && isDigit==false) cout<<"Your password is invalid.";
    else{
        cout<<"Your password has length less than 8";
    }
}