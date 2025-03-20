#include<iostream>
using namespace std;

class car{
    public:
 string name;
 float price;
 int seats;
 string type;

};
 void print(car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
 }
 void change(car c){
  c.name="maruti wagonR";
 }
int main(){
    car c1;
    c1.name="mercedes benz Gwagon";
    c1.price=90568394;
    c1.seats=4;
    c1.type="SUV";
   

    print(c1);
    change(c1);   //pass by value
    print(c1);
    return 0;
}