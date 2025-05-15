#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ; 
cin >> t ; 
while ( t--)
{
    int n , a ,b ; 
    cin >> n >> a >> b ; 
    int even = 0 ; 
    int odd = 0;
    for ( int i = 1 ; i <=n ; i ++){
        if (i % 2 == 0 ) even++ ; 
        else odd++ ; 
        
    }
    int tot = even*a + (odd*b) ; 
    cout << tot << endl ; 
}
return 0 ; 
}
