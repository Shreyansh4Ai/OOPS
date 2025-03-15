#include<iostream>
using namespace std;
int main(){
int n;
cout<<" enter a number :";
cin>> n;
int fact =1 ;
for(int i =1 ; i<=n ; i++){
   fact = fact * i ;
}
cout<<" the factorial is ="<< fact<< endl;
    return 0;
}