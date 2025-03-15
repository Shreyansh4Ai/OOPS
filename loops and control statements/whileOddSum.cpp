#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number :";
    cin>> n;
   int  sum=0;
   int i=1;
   while(i<=n){
    if(i%2!=0){
        sum=sum+i;
    }
    i++;
   }
    cout<< sum << " ";
   return 0;
}