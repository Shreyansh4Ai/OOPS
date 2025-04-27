#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin >> t ; 
while (t--){
    int na , nb , nc ;
    cin>> na >> nb >> nc ;
    if (na>(nb+ nc) || nb>(na +nc) || nc> (na+nb))
    cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
}
return 0;
}
