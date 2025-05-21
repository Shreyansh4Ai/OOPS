#include<iostream>
#include<fstream>
using namespace std ;
int main(){
    ifstream fin ;
    //file ko open kro fir read kro 
    fin.open("ballerina.txt");
     char c ;
     //fin>> c;    spaces ko consider nhi krta 
     c= fin.get();  //spaces ko consider krega
     while(fin.eof()){
        cout << c ;
        //fin>> c ;
        c= fin.get();
     };
     fin.close();
}