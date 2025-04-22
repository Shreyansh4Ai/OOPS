#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin >> t ; 
while ( t--){
   int n ; 
   cin >> n ; 
   int first = 0;
   int last = 0;

   last = n % 10 ;
   first =n;
   while( first >= 10){
       first = first /10;
   }
   cout << first + last << endl;
}

return 0 ; 
}
