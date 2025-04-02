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
    cricketer c2("Brohit sharma ",8000,45.4);
    int x=4;

    int*ptr=&x;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    return 0;
     
}