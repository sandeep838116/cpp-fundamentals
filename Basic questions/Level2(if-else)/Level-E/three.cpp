//Take day and month and check if it forms a valid calendar date (ignoring leap years).
# include<iostream>
using namespace std;
int main(){
    int day, month;
    cout<<"Enter the day: ";
    cin>>day;
    cout<<"Enter the month: ";
    cin>>month;

    if(day<1 || day>31 || month<1 || month>12) cout<<"It is not a valid date.";
    else{
        if((month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) && day<=31) cout<<"It is valid date.";
        else if((month==4 || month==6|| month==9 || month==11) && day<=30) cout<<"It is a valid date.";
        else if (month==2 && day<=28) cout<<"It is a valid date.";
        else cout<<"It is not a valid date.";
    }
}