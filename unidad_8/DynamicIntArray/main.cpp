#include <iostream>
#include "DynamicIntArray.h"

using namespace std;

int main() {
    int arr[]={1,2,3};
    DynamicIntArray uwu(arr,3);
    cout << uwu.getSize() << endl;
    uwu.print();

    uwu.push_back(100);

    uwu.print();

    return 0;
}
