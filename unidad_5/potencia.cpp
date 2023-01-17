#include <iostream>

using namespace std;

/**
 * Implementar una función para calcula la potencia.
*/
int potencia(int base, int exp) {
    int result = 1;
    for(int i = 0; i < exp; i++)
        result *= base;
    return result; 
}

/**
 * Implementar una función recursiva para calcula la potencia.
*/
int potencia_rec(int base, int exp) {
    if (exp==0)
        return 1;
    else
        return base*potencia_rec(base, --exp); 
}

int main() {
    int base, exp;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exp.: ";
    cin >> exp;

    cout << "La resultado es: " << potencia(base, exp) << endl;
    cout << "La resultado es: " << potencia_rec(base, exp) << endl;

    return 0;
}