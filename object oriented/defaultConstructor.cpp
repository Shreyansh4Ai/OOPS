#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int rollno;
    float cgpa;

     student(){   //default construct -->> helps in making call by both types we have

     }

    student(string n,int r,float c){  //parameterised constructors
        name=n;
        rollno=r;
        cgpa=c;

    }
};

int main(){

    student s1("Tony stark",69,9.87);

    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.cgpa<<endl;

    student s2;
    s2.name="Pepper pots";
    s2.rollno=67;
    s2.cgpa=9.69;
    
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.cgpa;

    student s3("shreyansh",58,0);
      s3.cgpa = 8.99;
       
      cout<<s3.name<<" "<<s3.rollno<<" "<<s3.cgpa;


    return 0;
}