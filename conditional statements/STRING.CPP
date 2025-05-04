#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ; 
cin >> t ;
while (t--){
    int n ;
    cin>> n ; 
    char s[n];
    for (int i = 0 ; i < n ; i++){
        cin >>s[i];
        if (s[i] =='A') cout << "T";
        else if (s[i]=='T') cout <<"A";
        else if (s[i]=='C') cout << "G";
        else if (s[i]=='G') cout << "C";
        
    }
    cout << endl ;
    
}
return 0;
}
