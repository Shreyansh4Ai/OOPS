#include<iostream>
using namespace std;
int main(){
    int a=11;
    int b=a--;    
      cout<< b << endl ; // kaam then update so 11
      cout << a << endl ; 
  int c =10;
  int d =--c;  //update then store -->>> pre decrement 
  cout<< d << endl;
  cout << c << endl;
    return 0;
}
/// similar for increment ops ///