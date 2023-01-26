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

int main() {
    char cadenades[] = "e6s0T9e6.eS.99u9n5a.CADENA";
    char actual = cadenades[0];
    for(int i = 0; actual != '\0'; actual = cadenades[++i]){
        if(esLetra(actual))
            cout << (char)(esMayuscula(actual) ? convertirAMinuscula(actual) :
                    actual);
        else if(esPunto(actual))
            cout << ' ';
    }
    cout << endl;
    return 0;
}
