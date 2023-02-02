#include <iostream>
#include "USCurrency.h"

using namespace std;

int main() {
    USCurrency a{3,50};
    USCurrency b{2,75};
    USCurrency c = a + b;

    cout << c << endl;

    return 0;
}
