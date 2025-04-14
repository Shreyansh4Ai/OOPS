#include<iostream>
using namespace std;
 
void f(int & x){  // x is refrence variable refering to m 
    x=x+10;
    cout<<x<<endl;
}
int main(){
    int m=10;
    f(m);
}