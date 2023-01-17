#include <iostream>

using namespace std;

/**
 * Implementar una función que calcule el 
 * factorial de un número. Probar la función
 * solicitando un número por teclado y mostrando 
 * el factorial.
*/
/* fac(n) = n * fac(n-1)   */
/*     n! = n * (n-1)!     */
int fac(int n) {
    if(n == 0)
        return 1;
    return n * fac(n-1);
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    cout << "El factorial de dicho numero es: " << fac(num) << endl;

    return 0;
}