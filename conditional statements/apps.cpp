#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t ;
    cin>> t ;
    while(t--){
        int s , x , y ,z ;
        cin>> s >> x >> y >> z ;

        // Free space initially
        int free_space = s - (x + y);

        if (free_space >= z) {
            cout << 0 << endl;
        } else {
            // Check if deleting one app is enough
            if (s - max(x, y) >= z) {
                cout << 1 << endl;
            } else {
                // Need to delete both
                cout << 2 << endl;
            }
        }
    }
    return 0;
}
