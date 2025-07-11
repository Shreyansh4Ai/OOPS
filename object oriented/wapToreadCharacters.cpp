#include<fstream>
#include<iostream>
using namespace std ;

int main(){
    fstream file ;
  
    file.open("abc.txt",ios::in);

    if(!file){
        cout <<"error"<<endl;
        return 1 ;
    }

    cout <<"reading characters"<<endl;
    char ch ;
    int count = 0;
    
        
    while(file.get(ch)){
        count++;
    }
     file.close();
    cout <<"Total no. of characters"<<count<<endl;
}