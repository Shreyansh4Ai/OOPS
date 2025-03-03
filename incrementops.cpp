#include<iostream>
using namespace std;
int main(){
    int a=11;
    int b=a++;    //post increment 
      cout<< b << endl ; // kaam then update so 11
      cout << a << endl ; //12
  int c =10;
  int d =++c;  //update then store -->>> pre increment 
  cout<< d << endl;
  cout << c << endl;
    return 0;
}
/// similar for decrement ops ///