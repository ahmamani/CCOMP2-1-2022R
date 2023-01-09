#include <iostream>

int main() {
    int a;
    float b;

    a = 6;
    b = 5;

    int suma = a + b;    
    int multi = a * b;
    float div = a / b;

    std::cout << "La suma es " << suma << std::endl;    
    std::cout << "La mult. es " << multi << std::endl;
    std::cout << "La div es " << div << std::endl;

    return 0;
}
