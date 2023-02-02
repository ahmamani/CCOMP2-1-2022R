#ifndef __DYNAMICARRAY_H__
#define __DYNAMICARRAY_H__

#include <iostream>

template<typename T>
class DynamicArray {
    private:
        T *data;
        int size;
    public:
        DynamicArray();
        DynamicArray(const T arr[], const int size);
        DynamicArray(const DynamicArray<T> &o);
        ~DynamicArray();

        void push_back(const T& val);
        void insert(int index, const T& val);
        void remove(const int pos);
        void clearUwU();
        
        int getSize() const;
        void print() const;
};

template<typename T>
DynamicArray<T>::DynamicArray() {
    this->size = 0;
    data = new T[size];
}

template<typename T>
DynamicArray<T>::DynamicArray(const T arr[], const int size) {
    this->size = size;
    data = new T[size];
    for(int i=0; i<size; i++)
        data[i]=arr[i];
}

template<typename T>
DynamicArray<T>::DynamicArray(const DynamicArray<T> &o) {
    this->size = o.size;
    data = new T[o.size];
    for (int i=0;i<size;i++)
        data[i]=o.data[i];
}

template<typename T>
DynamicArray<T>::~DynamicArray() {
    delete[] data;
}

template <typename T>
void DynamicArray<T>::push_back(const T& val) {
    T *tmp= new T [size+1];
    for (int i=0;i<size;i++){
        tmp[i]=data[i];
    }
    delete[] data;
    data=tmp;
    size++;
    data[size-1]=val; 
}

template <typename T>
void DynamicArray<T>::insert(int index,const T &val){
    T* tmp=new T[size+1];
    for (int i=0;i<index;i++)
        *(tmp+i)=*(data+i);
    *(tmp+index)=val;
    for (;index<size;index++)
        *(tmp+index+1)=*(data+index);
    delete[] data;
    data=tmp;
    size++;
}
        
template<typename T>
void DynamicArray<T>::remove(const int pos) {
    T *tmp= new T[size-1];
    for(int i=0, j=0; i<size; i++,j++){
        if(j==pos){
            i++;
        }
        tmp[j]=this->data[i];
    } 
    this->size--;
    delete[] data;
    this->data=tmp;
}

template <typename T>
void DynamicArray<T>::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
        std::cout << data[i] << " ";
    std::cout << "]" << std::endl;
}

template <typename T>
int DynamicArray<T>::getSize() const {
    return size;
}

template <typename T>
void DynamicArray<T>::clearUwU() {
    delete [] data;
    size=0;
    data = new T[size];
}

#endif


