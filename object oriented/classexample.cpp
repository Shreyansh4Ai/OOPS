#include<iostream>
using namespace std;
class car{
    public:
     string name;
    int price;
    int seats;
    string type;

};
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

   cout << c1.name<<" "<< c1.seats<<" "<<c1.price<<" "<<c1.type<< endl;
   cout << c2.name<<" "<< c2.seats<<" "<<c2.price<<" "<<c2.type;
   
   return 0;
}