#ifndef __POINTARRAY_H__
#define __POINTARRAY_H__

#include "Point.h"

class PointArray {
    private:
        Point *data;
        int size;

    public:
        friend std::ostream& operator<<(std::ostream& output, const PointArray &o);
        PointArray(int size);
        PointArray(const PointArray &o);
        ~PointArray();
        void setData(int index, Point val);
        Point getData(int index) const;
        int getSize() const;
        void print() const;
};

#endif