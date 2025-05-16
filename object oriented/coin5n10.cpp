#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int  t;
cin>> t ;
while(t--){
    int x;
    cin>> x ;
    if(x%5!=0 && x%10!=0){
        cout<<-1<<endl;
    }else if(x%5==0 && x%10!=0){
        x=x+10;
        cout<<x/10<< endl;
    }else {
        cout<< x /10 << endl;
    }
    
}
return 0;
}
