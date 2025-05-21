#include<iostream>
#include<fstream>
using namespace std ;
int main(){
    ofstream fout ;
    fout.open("royalty.txt");
    fout<<"At The End\n";
    fout<<"We All Have\n";
    fout<<"To Die\n";

    fout.close();

    ifstream fin;
    fin.open("royalty.txt");

    string line ;

    while(getline(fin,line))
    {
        cout<<line<<endl;
    }

    fin.close();
}