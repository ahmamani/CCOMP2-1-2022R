#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char cadenades[] = "e6s0T9e6.eS.99u9n5a.CADENA";
    char actual = cadenades[0];
    for(int i = 0; actual != '\0'; actual = cadenades[++i]){
        if(isalpha(actual))
            cout << (char)(isupper(actual) ? tolower(actual) :
                    actual);
        else if(ispunct(actual))
            cout << ' ';
    }
    cout << endl;
    return 0;
}
