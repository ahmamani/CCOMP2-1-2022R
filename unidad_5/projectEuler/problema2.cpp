/*
  Gabriel
*/

    #include <iostream>

using namespace std;
//#2

int fibonacci () {
    int x = 1;
    int y = 1;
    int res=0;
    while (y<4000000) {
        x+=y;
        y+=x;
        if (x%2==0)
            res+=x;
        if (y%2==0)
            res+=y;  
    }
    return res;
}

int main () {
    cout << "La suma de los valores pares del Fibonacci hasta que no pase los 4 millones es: "<<fibonacci()<< endl;
    return 0;
}
