#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin >> t ; 
while (t--){
    int x , y ; 
    cin >>x >> y ;
    int l = x % y ;
    int p = x / y ;
    if ( x % y == 0 ) cout << p << endl ; 
    else cout << p + l << endl ; 
    
}
return 0 ; 
}
