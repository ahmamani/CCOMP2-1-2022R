#include <iostream>

using namespace std;

/**
 * Implemente un programa que evalue si un caracter representa 
 * una letra minuscula
*/
int main() {
    char val;
    cout << "Ingrese el caracter por favor: ";
    cin >> val;

    int valor = static_cast<int>(val);
    
    if ( valor >= 97 && valor <= 122 ) {
        cout << "ES una letra minuscula!!!" << endl;
    } else {
        cout << "NO ES una letra minuscula!!!" << endl;
    }

    return 0;
}
