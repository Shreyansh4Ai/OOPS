#include<iostream>
using namespace std;
int main(){
    int n=10;
    int i=1;

    do{
      cout<< i << " ";
      i++;
    }  //while(i<=n);
    //speciality of while loop ---->> loop will perform atleast once even if the condition is false 
    while(i>=n);
    return 0;
}