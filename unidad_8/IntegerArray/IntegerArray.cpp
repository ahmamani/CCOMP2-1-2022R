#include "IntegerArray.h"

IntegerArray::IntegerArray(int size) {
    data = new int[size];
    this->size = size;
}

IntegerArray::IntegerArray(const IntegerArray &o) {
    data = new int[o.size];
    this->size = o.size;
    for(int i = 0; i < size; ++i)
        data[i] = o.data[i];
}

IntegerArray::~IntegerArray() {
    delete[] data;
}

void IntegerArray::setData(int index, int val) {
    if (index >= size){
        throw std::out_of_range ("el indice se pasa del limite");
    }
    data[index] = val;
}

int IntegerArray::getData(int index) const {
    if (index<0 || index>=size)
        throw  std::out_of_range ( "El indice no es el correcto" );
    return data[index];
}

int IntegerArray::getSize() const {
    return size;
}

void IntegerArray::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
        std::cout << data[i] << " ";
    std::cout << "]" << std::endl;
}