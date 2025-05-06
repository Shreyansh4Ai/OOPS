#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ; 
cin >> t ; 
while ( t--){
    int x , y ,z ;
    cin>> x >> y >> z ;
    int a = x*y;
    if (x<=3) cout << a << endl ;
    else {
        int b =  (x-1) / 3;
        int c =b*z;
        cout << a + c<< endl ;
    }
}
return 0 ;
}
