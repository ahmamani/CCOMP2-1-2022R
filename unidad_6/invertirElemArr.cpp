#include <iostream>

using namespace std;

void printArrayIt(const int arr[], const int tam) {
    for(int i = 0; i < tam; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

/**
 * Implementar una función que reciba un arreglo de enteros
 * y su tamaño e invierta los elementos del arreglo.
*/
void invertirElems(int arr[], const int tam) {
    for(int i = 0; i < tam/2; i++)
        intercambio(arr[i], arr[tam-i-1]);
}

void invertirElemsRec(int arr[], const int tam, int i = 0) {
    if(i == tam/2)
        return;
    intercambio(arr[i], arr[tam-i-1]);
    invertirElemsRec(arr, tam, ++i);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printArrayIt(arr, 7);
    invertirElems(arr, 7);
    printArrayIt(arr, 7);
    invertirElemsRec(arr, 7);
    printArrayIt(arr, 7);
    return 0;
}