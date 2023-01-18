#include <iostream>

using namespace std;

int sumar(const int arr[], const int tam) {
    long sum = 0;
    for(int i = 0; i < tam; sum += arr[i++]);
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << "Suma de elementos: " << sumar(arr, 7) << endl;
    return 0;
}