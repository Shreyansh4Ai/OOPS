#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int runs;
  float avg ;
     person(string name,int runs,float avg){
       this->name=name;                  //prints garbage values 
       this->runs=runs;
       this->avg=avg;
     }

       void print(){           //function inside class
        cout<<name<<" "<<runs  << " "<<avg<<endl;
    }
    int matches(){
      return runs/avg;
    }
      
};


int main(){
    person c1("wyrat kohli ",25000,56.06);
   
    person c2("Brohit sharma ",18000,55.5);

   c1.print();
   c2.print();

   cout<<c1.matches()<<endl;
   cout<<c2.matches()<<endl;
    return 0;
} 