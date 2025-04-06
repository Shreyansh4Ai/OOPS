#include<iostream>
using namespace std;
class scooty{   //parent class 
    public:
    int topspeed;
    int mileage;
    
    private:
     float bootspace;

};
class bike : public scooty{  //derived /child class 
    public:
    int gears;
};

int main(){
    bike b1;
    b1.topspeed=420;
    b1.mileage=30.0;
    b1.gears=7;
  cout<<b1.topspeed<<" "<<b1.mileage<<" "<<b1.gears<<endl;
}