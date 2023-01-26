#include <iostream>
#include <cctype>

using namespace std;

//Diego
bool esLetra(const char& c) {
    int x=static_cast<int>(c);
    return ( (x>64 && x<91) || (x>96 && x<123) );
}

//Gabriel
bool esMayuscula(const char& c) {
    return (c>=65 && c<=90);
}

//Gabriel
char convertirAMinuscula(const char& c) {
    return c+32;
}

//Gabriel - modificable uwu
bool esPunto(const char letra) {
    return ((letra>=33 && letra<=47) ||(letra>=58 && letra<=64) ||(letra>=123 && letra<=126));
}

void convertirMinuscula(char cad[]) {
    char actual= cad[0];
    for (int i = 0; actual != '\0'; actual = cad[++i]) {
        if (actual>=65 && actual<=90)
            cad[i]+=32;
    }
}

int main() {
    char cad[] = "CADENA";

    cout << cad << endl;
    convertirMinuscula(cad);
    cout << cad << endl;

    return 0;
}
