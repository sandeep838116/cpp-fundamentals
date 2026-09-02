#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    //Pattern 5
    // *****
    // ****
    // ***
    // **
    // *
    for(int i=num;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}