#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ; 
cin >> t ; 
while (t--){
    int x ,y ;
    cin>> x >> y ;
    float rule = x*1.07;
    if (y>rule){
        cout <<"NO"<<endl;
    }else cout <<"YES"<<endl;
}
return 0;
}
