#include <iostream>

using namespace std;

int main() {
    int c = 10;

    int a = --c;
    cout << ++a << endl;
    cout << a << endl;

    c = c + 1; // -> c++ -> c += 1
    c = c + 10; // -> c += 10;
    c = c - 10; // -> c -= 10;
    c = c * 10; // -> c *= 10;
    c = c / 10; // -> c /= 10;


    return 0;
}
