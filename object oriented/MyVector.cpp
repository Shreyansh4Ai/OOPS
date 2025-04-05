#include<iostream>
using namespace std;

class vector{
public:
int size;
int capacity;
int*arr;

vector(){  //default constructor
  size=0;
  capacity=1;
  arr=new int[1];

}
  
void add(int ele){
 if(size == capacity){
 capacity*=2;
   int*arr2 = new int[capacity];
   for (int i=0;i<size;i++){  //copying array 1 in array 2
    arr2[i]=arr[i];
   }
    
 }
   arr[size++]=ele;
}

void print(){
  for(int i=0;i<size ;i++){
    cout<<arr[i]<<" ";
    
  }
  cout<<endl;
}
int get(int indx){        //printing the element 
  if(size==0){
    cout<<"Array is empty"<<endl;
    return-1;
  }
  if(indx>=size || indx<0){
    cout<<"invalid index"<<endl;
    return -1;
  }
  return arr[indx];

}

void remove (){  //removing the element 
  size--;
}
};
int main (){
      //int *arr=new int[5];  //dynamic
      vector v;
      v.add(10);
      v.print(); 
      cout<<v.size<<" "<<v.capacity<<endl;//to get the size and capacity 
      v.add(12);
      v.print(); 
      cout<<v.size<<" "<<v.capacity<<endl;//to get the size and capacity 
      v.add(7);
      v.print(); 
      cout<<v.size<<" "<<v.capacity<<endl;//to get the size and capacity 

      cout<<v.get(10)<<endl; // trying for 10th index which does not exist 
      v.remove();
    return 0;

}