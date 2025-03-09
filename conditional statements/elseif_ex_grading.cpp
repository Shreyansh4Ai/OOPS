#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter the marks";
    cin>> marks;

    if(marks>=90){
        cout<<" A";
    } else if(marks<90 && marks>=80){
        cout<<"B";

    }  else if(marks<80 && marks>=50){
        cout<<"c";

    } else if(marks<50){
        cout<<"D";
    }
    return 0;
}