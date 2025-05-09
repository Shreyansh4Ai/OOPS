#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin >> t ;
while (t--){
    int n , k , m ;
    cin >> n >> k >> m ; 
    int l = k*m;
    if (n % l == 0 ){
        cout << n/l << endl ; 
    }else cout << (n / l ) + 1 << endl ;
}
return 0;
}
