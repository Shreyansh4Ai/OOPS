#include<iostream>
using namespace std;
 
class cricketer{
    public:
    int runs;
    float average ;
    int wickets;
};

class engineer {
    int experience;
    string domain;

};
 
class don:public engineer ,cricketer{//multiple inheritance 
public:
string name;
};
int main(){
    return 0;
}