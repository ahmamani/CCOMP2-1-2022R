#ifndef __INTEGERARRAY_H__
#define __INTEGERARRAY_H__

#include <iostream>

class DynamicIntArray {
    private:
        int *data;
        int size;

    public:
        DynamicIntArray();
        DynamicIntArray(const int arr[], const int tam);
        DynamicIntArray(const DynamicIntArray &o);
        ~DynamicIntArray();

        void push_back(int val);
        
        int getSize() const;
        void print() const;
};

#endif