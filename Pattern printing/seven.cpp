#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    //Pattern 2
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    for(int i=0;i<num;i++){
        for(int j=num-i-1;j>0;j--){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}