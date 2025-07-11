#include<iostream>
#include<fstream>
using namespace std ;

int main(){
    fstream file ; // object for file stream 
  
    // write data using ios out 

    file.open("sample.txt" , ios::out);
    if(!file){
        cout <<"error opening for writing ~"<<endl;
        return 1 ;
    }
       cout <<"writing to file "<<endl;
       file<<"hello world " <<endl;
       file<<"this is baba yaga here !"<<endl;

       file.close(); 


       // step 2  read data from file 

       file.open("sample.txt" , ios::in);
       if(!file){
        cout <<"error opening file for reading "<<endl;
        return 1 ;
       }

       cout <<"reading from file "<<endl;
       string line ;

       while(getline(file , line)){
        cout <<line << endl;
       }

    file.close();

    




}