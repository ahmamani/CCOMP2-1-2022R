/*
 * Gabriel
*/
#include <iostream>

using namespace std;
// #4 

bool Palindromo(int num) {
    int original = num;
    int inverso = 0;
    while (num > 0) {
        inverso = inverso * 10 + num % 10;
        num /= 10;
    }
    return original == inverso;
}

int main() {
    int maxPalindromo = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int producto = i * j;
            if (Palindromo(producto) && producto > maxPalindromo) {
                maxPalindromo = producto;
            }
        }
    }
    cout << maxPalindromo << endl;
    return 0;
}

