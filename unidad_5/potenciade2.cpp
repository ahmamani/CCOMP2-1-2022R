#include <iostream>

using namespace std;

/**
 * Implementar una función para returne 'true' si el argumento
 * es potencia de 2 y 'false' caso contrario.
*/
bool potenciade2(int num) {
    int res = 1;
    while(res < num)
        res *= 2;
    return (res == num);
}
//
/**
 * Implementar una función rec para returne 'true' si el argumento
 * es potencia de 2 y 'false' caso contrario.
*/
bool potenciade2_rec(int num) {
    if(num==1)
        return true;
    else if(num%2==0)
        return potenciade2_rec(num/2);    
    else
        return false;
}

int main() {
    int num, exp;
    cout << "Ingrese el número a evaluar: ";
    cin >> num;

    cout << "La resultado es: " << potenciade2(num) << endl;
    cout << "La resultado es: " << potenciade2_rec(num) << endl;

    return 0;
}