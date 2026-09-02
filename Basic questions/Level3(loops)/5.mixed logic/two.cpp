//Count Total numbers between 1 & 500 are divisible by 7 but not divisible by 5.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1;
    int cnt=0;
    while (i<=500)
    {
        if((i%7==0)&&(i%5!=0)) cnt++;
        i++;
    }
    cout<<cnt;
}

// without loop
// #include <iostream>
// using namespace std;

// int main() {
//     int total_div_by_7 = 500 / 7;
//     int total_div_by_35 = 500 / 35;
    
//     int cnt = total_div_by_7 - total_div_by_35;
    
//     cout << cnt << endl; // Outputs 57 instantly
//     return 0;
// }
