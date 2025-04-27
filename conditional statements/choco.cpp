include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin >> t ;
while (t--){
    int c ,x , y ;
    cin >> c >> x >> y ;
    int choco=c-x;
    int pesa = choco*y;
    cout << pesa << endl;
}
return 0;
}