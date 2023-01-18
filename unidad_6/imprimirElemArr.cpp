#include <iostream>

using namespace std;

void printArrayIt(const int arr[], const int tam) {
    for(int i = 0; i < tam; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void printArrayRec(const int arr[], int tam, int i = 0) {
    if( i == tam ) {
        return;
    } else  {
        cout << arr[i] << " ";
        printArrayRec(arr, tam, ++i);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printArrayIt(arr, 7);    
    printArrayRec(arr, 7);
    return 0;
}