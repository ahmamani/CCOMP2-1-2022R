#include <iostream>
#include "Stack.h"

using namespace std;

int main() {

    Stack<int> s1;
    Stack<int> s2;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    s2.push(1);
    s2.push(2);
    s2.push(3);
    s2.push(4);

    cout << s1 << endl;
    cout << s2 << endl;
    cout<<s1+s2<<endl;
    return 0;
}