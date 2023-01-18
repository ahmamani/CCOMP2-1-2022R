/**
 * Implementar una función que ordene un arreglo de enteros
*/
#include <iostream>

using namespace std;

void printArrayIt(const int arr[], const int tam) {
    for(int i = 0; i < tam; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void sort(int arr[], int tamx) {
    int tam = sizeof(arr) / sizeof(arr[0]);
    cout << "tam en sort" << tam << endl;
}

int main() {
    int arr[] = {7, 5, 4, 6, 2, 1, 3};
    int tam = sizeof(arr) / sizeof(arr[0]);
    cout << "tam en main" << tam << endl;
    printArrayIt(arr, tam);
    sort(arr, tam);
    printArrayIt(arr, tam);
    return 0;
}