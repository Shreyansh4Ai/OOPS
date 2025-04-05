#include<iostream>
using namespace std;

class student{
   public:
    int rno;
    string name;
     student(){
          //default constructor 
     }

     student(int r,string n ,float m ){ //parameterised constructor 
        rno=r;
        name=n;
        marks=m;
     }

     void display(){
        cout<<rno<<endl;
        cout<<name<<endl;
        cout<<marks<<endl;
     }

    float  getmarks(){ //getter -->> to access the private attributes 
        return marks ;
    } 

    float setmarks( float m ){  //setter -->> to make changes in private attributes
        marks=m;
        return marks;
    }
    string setname(string n){  // we have to make a seperate setter everytime for different different attributes and setter can also modify the public attributes
       name=n;
       return name;
    }
    
    
private :
    float marks; 

};
int main(){
    student s1(58,"tyler rake",99.7);
 
   s1.display();
   s1.setmarks(99.98);
   s1.setname("nik rake");

   s1.display();
}