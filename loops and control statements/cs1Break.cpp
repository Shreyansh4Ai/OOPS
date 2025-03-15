#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number :";
    cin>> n;
   int  sum=0;
   for( int i=1;i<=n;i++){
    sum=sum+i;
    if(i==5){
        break; //control STATEMENT
    }

   }
    cout<< sum << " ";
   return 0;
}