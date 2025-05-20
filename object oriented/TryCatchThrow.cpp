#include<iostream>
using namespace std;
int main(){
    int a , b ;
    cin>> a >> b ;
    try{
    if (b==0){
     //   cout<< "divide by zero is not defined"<<endl;
        throw  "divide by zero is not defined";
        return 0;
    }
    int c = a/b ;  //possiblity of exception lies here 
    cout<< c << endl ;
    
}


catch(const char *e){
   cout<< "Error Occured:"<< e << endl;
}
    return 0;
}