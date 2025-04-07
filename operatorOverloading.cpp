#include<iostream>
using namespace std;
class fraction{
    public:
    int num ;
    int den;

    fraction(int num , int den){
        this -> num=num ;
        this-> den=den;
    }
   void display(){
    cout<<num<<" / "<< den <<endl; 

   }
   fraction operator+(fraction  f){
     int newNum=num*f.den +f.num*this->den;
     int newDen=this-> den*f.den;
     fraction ans(newNum , newDen);

     return ans;  
   }
   fraction operator-(fraction  f){  //required to debug
    int newNum=num*f.den  - f.num*this->den;
    int newDen=this-> den*f.den;
    fraction ans(newNum , newDen);
    return ans;
   }

    fraction operator*(fraction  f){  //required to debug
        int newNum=this->num*f.num;
        int newDen=this-> den*f.den;
        fraction ans(newNum , newDen);
        return ans;  
      }

     
  
};
int main(){
    fraction f1(5,4);
    fraction f2(6,9);
    f1.display();
    f2.display();
    fraction f3=f1+f2;
    f3.display();
    fraction f4=f1-f2;
    f4.display();
     fraction f5=f1*f2;
     f4.display();
    return 0;
}