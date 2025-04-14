#include<iostream>
using namespace std;

class box{
    public:
    double length ;
    double height ;
    double breadth ;   
};
 void volume (box b){
     double vol=b.length*b.height*b.breadth;
     cout<<"Volume ="<<vol<<endl;
 }
int main(){
    box b1;
    box b2;

    //b1 specs
    b1.height=10;
    b1.length=9.0;
    b1.breadth=6.0;
    volume(b1);
 //b2 specs
 b2.height=8.0;
 b2.length=7.0;
 b2.breadth=4.0;
   volume(b2);
    return 0;
}