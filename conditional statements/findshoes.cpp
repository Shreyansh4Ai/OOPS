include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin >> t ;
while (t--){
    int n , m ;
    int rig =0;
    int lef=0; 
    cin >> n >> m ;
    int total = n*2;
    if (m>=n){
        rig=n;
        cout << rig << endl ;
    }
    else if (m<n){
        
         lef=n-m;
         rig = m + lef ;
         cout << lef + rig << endl ;
    }
    
}
    return 0;

}
