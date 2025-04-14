#include<iostream>
using namespace std ;
 int x=100;  //global variable 

 int main(){
    int x =90;  //local variable

    cout<< "x="<<x<<endl;

    cout<<"x="<<::x<<endl;  //using scope resolution operator to access global variable 
    return 0;
 }