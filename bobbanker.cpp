#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin >> t ; 
while (t--){
    int w , x ,y ,z ;
    cin >> w >> x>> y >> z ;
    int total=w+(x*z);
    int deduc=y*z;
    int pint=total - deduc ;
    cout << pint <<endl ; 
}
return 0;
}
