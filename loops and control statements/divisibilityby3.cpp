#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter the number :";
    cin>> n ;
    int sum =0;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            sum=sum +i;
        }
    }
cout<< " the sum is "<< sum << endl;
    return 0;
}