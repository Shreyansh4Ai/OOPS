#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int runs;
  
    // person(string name,int runs){
    //     name=name;                  //prints garbage values 
    //     runs=runs;
    // }
      person(string n,int r){
        name=n;
        runs = r;
        
      }
};
int main(){
    person c1("wyrat kohli ",25000);
   
    person c2("Brohit sharma",18000);

    cout<<c1.name<<c1.runs<<endl;
    cout<<c2.name<<c2.runs<<endl;
    return 0;
}