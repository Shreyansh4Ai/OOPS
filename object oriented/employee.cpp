#include<iostream>
using namespace std;

class employee{
 public:
    int id;
    string name;
    float salary;

    employee(int i, string n, float s){
        id=i;
        name=n;
        salary=s;
    }


void display(){
 cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};

int main(){
    employee e1(76,"baba tillu",900000);
     e1.display();
    employee e2(89,"don tillu",50000);
    e2.display(); 
}