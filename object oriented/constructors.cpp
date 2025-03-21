#include<iostream>
using namespace std;

class student {  //student is a new data type
    public:  
    string name;
      int rollno;
      float gpa;
       float marks;


student(string s,int r ,float g,float b){
    name = s;
    rollno=r;
    gpa =g;
    marks=b;
}
};
int main(){
    student s1("jhon wick",94,9.4,96);
   
cout<<s1.name<<" "<<s1.rollno<<" "<<s1.gpa<<" "<<s1.marks;
return 0;
}