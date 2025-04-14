#include<iostream>
using namespace std;

class circle
{
    public:
      double radius ;

    double compute_area(){
       return 3.14*radius*radius;
    }
    
};
int main(){
    circle c1;
    c1.radius=6.9;
     int rest= c1.compute_area();
     cout<<rest<<endl;
    return 0;
}