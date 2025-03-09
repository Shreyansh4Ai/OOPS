#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<< "enter the character :";
    cin>>ch;

    if(ch>='a' && ch<'z'){
        cout<<"lower case";
    } else{
        cout<<"Upper case";
    }
    return 0;
}