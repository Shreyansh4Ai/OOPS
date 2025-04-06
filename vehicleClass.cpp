#include<iostream>
using namespace std;

class vehicle{
    public:
    int topspeed;
    float mileage;
    string fueltype;
};
class car: public vehicle{ //derived /child class
    public:
      bool sunroof; //car specific 
};
class bike: public vehicle { //derived /child class
    public:

};
class truck: public vehicle { //derived /child class
    public:

};
int main(){
    bike b1;
    b1.topspeed=89;
    b1.mileage=68;
    b1.fueltype="petrol";

  cout<<b1.topspeed<<" "<<b1.mileage<<" "<<b1.fueltype<<endl;
    return 0;
}