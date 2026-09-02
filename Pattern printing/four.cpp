#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    //Pattern 4
    // 1
    // 22
    // 333
    // 4444
    // 55555
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }

    return 0;
}