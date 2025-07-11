#include<fstream>
#include<iostream>
using namespace std ;

int main(){

    // create an if stream object 
    ifstream infile("babaYaga.txt") ;

    //check the file is open 

    if(infile.is_open()){
        string line;
  //read data
        while(getline(infile,line)){
            cout<<line<<endl;
        }
    
      //close the file
      infile.close();

    }else {
        cout <<"unable to open file for reading "<<endl;
    }



}