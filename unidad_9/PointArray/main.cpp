#include <iostream>
#include "DynamicArray.h"
#include "Point.h"

using namespace std;

int main() {
    // DynamicArray de Enteroos uwu
    int arr[]={4,5,6,8,1,2,23,56,0};
    int tam = sizeof(arr)/sizeof(arr[0]);  
    DynamicArray<int> Entero(arr, tam);
    cout << "Size: " << Entero.getSize() << endl;
    Entero.insert(6,1000);
    cout<<endl;
    Entero.print();
    cout<<endl;
    Entero.push_back(9999);
    Entero.print();
    cout<<endl;
    Entero.remove(6);
    Entero.print();
    cout<<endl;
    Entero.clearUwU();
    Entero.print();
    cout<<endl;
  

    // DynamicArray de doubles uwu
    double arruwu[]={0.2,0.3,0.4,0.5};
    int tamuwu = sizeof(arruwu)/sizeof(arruwu[0]);  
    DynamicArray<double> arraycito (arruwu,tamuwu);
    arraycito.insert(4,0.3);
    arraycito.print();
    arraycito.push_back(0.6);
    arraycito.print();
    arraycito.remove(2);
    arraycito.print();
    arraycito.clearUwU();
    arraycito.print();
 
    // DynamicArray de string uwu
    string arrString[]={"hola","holita","holasa","holilita","chau"};
    int tamString=sizeof(arrString)/sizeof(*arrString);
    DynamicArray<string>da1(arrString,tamString);

    da1.print();
    da1.push_back("adios");
    da1.print();
    da1.insert(0,"hi");
    da1.print();
    da1.remove(2);
    da1.print();
    da1.clearUwU();
    da1.print();
 /*   
    // DynamicArray de Point uwu
    Point arrp[5];
    int tamp=sizeof(arrp)/sizeof(*arrp);
    DynamicArray<Point>da2(arrp,tamp);

    da2.print();
    // No tengo funcion print :(
*/
    return 0;
}




















