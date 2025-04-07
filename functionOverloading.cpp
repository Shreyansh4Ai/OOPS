#include<iostream>
using namespace std;

class loading{
     public:
     void sum(string a,string b){   //function of same name == function overloading 
        cout<< a+b<<endl;
         }
     void sum (int a ,int b){   //function of same name == function overloading 
        cout<< a+b << endl;
     }
     
     void sum(int a,int b , int c){   //function of same name == function overloading 
        cout<< a+b+c <<endl;
     }
    // int sum (int a,int b){  // this is not valid for function overloading   produces error
    //return a+b;


};

int main(){
    loading a;
a.sum(5,5);
a.sum(4,6,8);
a.sum("mike","banning");


return 0;
}