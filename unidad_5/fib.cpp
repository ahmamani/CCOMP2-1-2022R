#include <iostream>

using namespace std;

int fib(int n) {
    if ( n == 0 || n == 1 )
        return 1;
    else
        return fib(n-2) + fib(n-1);
}

int fib_it(int n) {
    int fib_n;
    int fib_n1 = 1;
    int fib_n2 = 1;
    while(--n) {
        fib_n = fib_n1 + fib_n2;
        fib_n2 = fib_n1;
        fib_n1 = fib_n;
    }
    return fib_n;
}

int main() {
    cout << fib(5) << endl;
    cout << fib_it(5) << endl;

    return 0;
}