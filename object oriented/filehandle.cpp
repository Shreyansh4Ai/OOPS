#include<fstream>
#include<iostream> 
using namespace std ;

int main(){
    ofstream outfile("babaYaga.txt");

    // check if the file is open 

    if(outfile.is_open()){
        //write to file 
        outfile<<"this is jhon wick "<<endl;
        outfile<<"Consequences!"<<endl;
    

    // close the file 
    outfile.close();
    cout<<"Data written succesfully"<<endl;
}else {
   cout <<"Unable to open file for writing "<<endl;
}
return 0 ;
}