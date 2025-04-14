#include<iostream>
using namespace std;
int main(){
    int *arr;int size;
    cout<<"enter the size of integer array"<<endl;
    cin>>size;
    cout<<"the size of integer array is "<< size ;
    arr=new int[size];
  cout<<endl<<"dynamic allocation is  done ";
    return 0;
}  //if sufficient memory is not present to allocate new returns null pointer 