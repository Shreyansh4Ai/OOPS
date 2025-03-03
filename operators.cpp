#include<iostream>
using namespace std;
int main(){
    int a =5,b=10;
       // ARITHMETIC OPS 
    cout<< "sum="<< (a+b)<< endl;
    cout << "product="<< (a*b) << endl;
    cout << "division = "<< b/a << endl;
    cout<< "subtraction= " << (a-b)<< endl;
    cout<< "modulo or remainder="<<(b%a)<< endl;

    cout<< (5/(double )2 )<< endl; //typecasting 

     //RELATIONAL OPS 
     cout<< (3 < 5) << endl;
     cout << (3>5)  <<endl;
     cout << (3>=5)  <<endl;
     cout << (3<=5)  <<endl;
     cout<< (3!=5) << endl;
     cout << (3==5) <<endl;

     //LOGICAL OPS
     cout<< !(3<1) <<endl; //not
     cout<<( (3<5 ) || (3>5)) <<endl;
     cout<<( (3<5 ) && (3>5)) <<endl;
    return 0;
}