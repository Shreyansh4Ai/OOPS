#include <iostream>
#include <algorithm> // for min function
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int total_seats = 10 * x;
        int booked_seats = min(total_seats, y);
        int total_earnings = booked_seats * z;
        cout << total_earnings << endl;
    }
    return 0;
}