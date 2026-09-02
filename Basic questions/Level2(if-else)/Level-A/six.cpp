//Write a program to read a character and check whether it is a vowel or a consonant.
#include<iostream>
using namespace std;
int main(){
    char word;
    cout<<"Enter a character(alphabet): ";
    cin>>word;

    if((word>='a' && word<='z')||(word>='A'&& word<='Z')){
        if(word =='a' || word=='e' || word =='i' || word=='o' || word=='u' ||word =='A' || word=='E' || word =='I' || word=='O' || word=='U' ){
        cout<<"Vowel.";
    }else{
        cout<<"Consonant.";
    }
    }else{
        cout<<"It is not a valid character.";
    }
}