#include <iostream>

using namespace std;

/**
 * Escribir una función usando operadores de bit
 * para calcular la potencia de 2 numero.
*/
bool potenciade2(int num) {
    return !(num & (num - 1));
}

/**
 * usando operadores de bits
*/
void intercambio(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int num = 16;   
    
    /*      111 &
            010 
           ----
            010
    */
    cout << potenciade2(num) << endl;
    
    int x = 10;
    int y = 20;
    intercambio(x, y);
    cout << x << ", " << y << endl;

    return 0;
}