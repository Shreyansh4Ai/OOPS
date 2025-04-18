#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t; 
cin>> t;
while(t--){
   int a , b, c, d ;
   cin>> a >> b >> c >> d ;
   if (a>= b && c>d) cout<< a+c<<endl;
   else if (b>=a && d>c) cout << b+ d << endl;
   else if (a>b && d>=c) cout << a+ d << endl;
   else if (b>a && c>=d) cout << b+ c << endl;
  
}
return 0;
}
