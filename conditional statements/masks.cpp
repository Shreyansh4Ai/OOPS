#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if (100 * x < 10 * y) {
            cout << "DISPOSABLE" << endl;
        } else {
            cout << "CLOTH" << endl;
        }
    }
    return 0;
}