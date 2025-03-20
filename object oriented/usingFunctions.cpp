#include<iostream>
using namespace std;
class car{
    public:
     string name;
    int price;
    int seats;
    string type;

};
void print(car c)   // using function to print 
{
cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}
int main(){
   car c1;
   c1.name="bmw msport";
   c1.seats=2;
   c1.type="sedan";
   cin>> c1.price;

   car c2;
   c2.name="mercedes GT coupe";
   c2.seats=4;
   c2.type="sedan";
   cin>> c2.price;

  print(c1);
  print(c2);
   return 0;
}