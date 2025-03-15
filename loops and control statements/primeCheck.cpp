#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " Enter a number :";
    cin>> n;
    bool prime = true ;
    for(int i=2; i<n ; i++){
        if(n%i==0) {
           prime=false;
            break;
        }  
        
    }
    if(prime == false ){
        cout<< " not  a prime number ";

    }else{
        cout<<" a prime number ";
    }
 
    return 0;
}