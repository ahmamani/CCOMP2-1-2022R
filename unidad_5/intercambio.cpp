#include <iostream>

using namespace std;

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int x = 10;
    int y = 20;

    intercambio(x, y);

    cout << x << endl;  // 20
    cout << y << endl;  // 10

    return 0;
}