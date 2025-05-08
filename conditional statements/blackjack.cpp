#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin >> t ; 
while ( t--){
    int a , b ;
    cin >> a >> b ;
    int l = 21 - (a+b);
    if (l <= 10 && l >=1 ) cout << l << endl ;
    else cout << -1 << endl ;
}
return 0 ; 
}
