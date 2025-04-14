#include<iostream>
using namespace std;
int main(){
    int x=10;
    int & ref=x; //refrence var of x

    cout<<x<<endl;
    cout<<ref<<endl;

    ref =100;
    cout<<x<<endl;   //changed x using refrence variable 
    return 0;
}