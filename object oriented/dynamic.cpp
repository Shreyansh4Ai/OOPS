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


int main(){
    cricketer c1("Whyrat kohli",3000,67.8);
    cricketer *c2=new cricketer("Brohit sharma ",8000,45.4);
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2->name<<" "<<c2->runs<<endl;

       int x1=5;
       int *x2=new int(6);

    int *ptr = new int(48);
    return 0; 
}