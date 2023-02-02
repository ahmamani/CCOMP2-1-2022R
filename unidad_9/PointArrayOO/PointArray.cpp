#include <iostream>
#include <stdexcept>
#include "PointArray.h"

PointArray::PointArray(int size) {
    data = new Point[size];
    this->size = size;
}

PointArray::PointArray(const PointArray &o) {
    data = new Point[o.size];
    this->size = o.size;
    for(int i = 0; i < size; ++i)
        data[i] = o.data[i];
}

PointArray::~PointArray() {
    delete[] data;
}

void PointArray::setData(int index, Point val) {
    if (index >= size){
        throw std::out_of_range ("el indice se pasa del limite");
    }
    data[index] = val;
}

Point PointArray::getData(int index) const {
    if (index<0 || index>=size)
        throw  std::out_of_range ( "El indice no es el correcto" );
    return data[index];
}

int PointArray::getSize() const {
    return size;
}

void PointArray::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
        data[i].print();
    std::cout << " ]" << std::endl;
}