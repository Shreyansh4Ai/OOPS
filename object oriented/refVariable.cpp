#include<iostream>
using namespace std;
int main(){
int x=10;
int *ptr=&x;
int &m = *ptr; //m is the refrence variable 
cout<< m <<endl;  //prints 10;
}