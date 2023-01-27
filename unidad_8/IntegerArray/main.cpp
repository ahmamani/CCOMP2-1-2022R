#include <iostream>
#include "IntegerArray.h"

using namespace std;

int main() {
    IntegerArray a(2);
    
    a.setData(0, 2);
    a.setData(1, 5);

    if(true) {
        IntegerArray b = a;
    }

    a.print();
    return 0;
}
