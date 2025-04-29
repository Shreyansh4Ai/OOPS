#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin>> t ;
while (t--){
    int x , y ;
    cin>> x >> y ;
    int out =x-y;
    if (x>y)
    cout << out << endl;
    else {
    out=out*(-1);
    cout<< out <<endl;
    }
}
return 0;
}
