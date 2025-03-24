#include<iostream>
using namespace std ;

class car{
    public:
    string name;
    int seats;
    double price ;
    string brand ;

    car(string n,int s,double p,string b){
        name=n;
        seats=s;
        price=p;
        brand=b;

    }
};

    
int main(){

    car c1("GT coupe",4,10000000,"Mercedes");
   
    cout<< c1.name <<" "<< c1.seats<<" "<<c1.price<<" "<<c1.brand<<endl;
    
    car c2("R8",2,12398765,"Audi");

    cout<< c2.name <<" "<< c2.seats<<" "<<c2.price<<" "<<c2.brand<<endl;
    
    return 0;
}