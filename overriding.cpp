 #include<iostream>  
 using namespace std;
 class scooty{
    public:
    int topspeed ;
    float mileage;
 
    virtual void sound(){    // try running without virtual and see the difference 
        cout<<"vroom vroom "<< endl;
    }
    private :
  int  bootspace;

 };
  class bike : public scooty{// derived class
    public:
    int gears;
    void sound(){
        cout<<"Dhroom dhroom"<<endl;
    }

  };
  class superbike : public scooty{
    public:
    void sound(){
        cout<<"BHOOM bhoom"<<endl;
    }
};
  int main(){
    scooty*b=new bike;
    b-> sound();
    

    scooty *c=new superbike;
    c-> sound();
    return 0;
  }