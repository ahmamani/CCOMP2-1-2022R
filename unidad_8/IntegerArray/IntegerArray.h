#ifndef __INTEGERARRAY_H__
#define __INTEGERARRAY_H__

#include <iostream>

class IntegerArray {
    private:
        int *data;
        int size;

    public:
        IntegerArray(int size);
        IntegerArray(const IntegerArray &o);
        ~IntegerArray();
        void setData(int index, int val);
        int getData(int index) const;
        int getSize() const;
        void print() const;
};

#endif