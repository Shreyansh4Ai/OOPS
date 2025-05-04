#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>> t ;
	while(t--){
int x , y , z;
cin>> x >> y >> z ;
int l=y/x; //time 
if(z-l < 0){
    cout<< 0 << endl;
}else{
cout<< z-l << endl;
}
}
return 0;
}
