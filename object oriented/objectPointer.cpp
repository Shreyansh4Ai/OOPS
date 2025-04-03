#include<bits/stdc++.h>
using namespace std;
class cricketer{
    public:
    string name;

    int runs;
    float avg ;
    
    cricketer(string name,int runs ,float avg){
        this->name;
        this->runs;
        this->avg;
    }
};

void change(cricketer *c){
   (*c).avg=78.2;
  // c->avg=78.2;
}
int main(){
    cricketer c1("Whyrat kohli",3000,67.8);
    cricketer c2("Brohit sharma ",8000,45.4);
    int x=4;

    int*ptr=&x;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr=100;
     cout<<x<<endl;
  
     cricketer*ptr1= &c1;
     cout<<(*ptr1).runs<<endl; //c1.runs
     (*ptr1).avg=77.6;
     cout<<c1.avg<<endl;
    return 0;
     
}