#include<iostream>
using namespace std;

class student {
  private:
    int a;
    string b;

  public:
    // Correct friend function declarations
    friend ostream& operator<<(ostream& out, const student& s);
    friend istream& operator>>(istream& in, student& s);
};

// insertion operator definition
ostream& operator<<(ostream& out, const student& s) {
    out << "a:" << s.a << " b:" << s.b;
    return out;
}

// extraction operator definition
istream& operator>>(istream& in, student& s) {
    cout << "Enter a:";
    in >> s.a;
    cout << "Enter b:";
    in >> s.b;
    return in;
}

int main() {
    student s;
    // input object data
    cin >> s;
    // output object data
    cout << s;
    return 0;
}