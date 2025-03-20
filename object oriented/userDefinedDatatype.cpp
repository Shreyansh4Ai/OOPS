#include<iostream>
using namespace std;

class student {  //student is a new data type
    public:  
    string name;
      int rollno;
      float gpa;
       float marks;

};

int main(){
    student s;
    s.name = "john wick";
    s.rollno=58 ;
    s.gpa=9.4;
    cin>>s.marks;
cout<<s.name<<" "<<s.rollno<<" "<<s.gpa<<" "<<s.marks;
return 0;
}