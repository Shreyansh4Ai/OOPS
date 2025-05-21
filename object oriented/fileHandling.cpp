#include<iostream>
#include<fstream>
using namespace std ;
int main(){
    //file ko open krna 
    ofstream fout;
    fout.open("ballerina.txt"); // file not found the file will be created 
    // write kr skte h 
    fout << "CONSEQUENCES John";

    fout.close(); // resources release krwane k liye

}