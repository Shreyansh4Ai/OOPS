#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin >> t ;
while(t--){
    int x , y , z ; 
    cin >> x  >> y >> z ;
    
    int man = z-y;
    int rest= man / x ; 
    cout << rest << endl ; 
}
return 0; 
}
