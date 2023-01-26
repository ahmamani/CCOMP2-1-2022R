#ifndef __INTEGERARRAY_H__
#define __INTEGERARRAY_H__

class IntegerArray {
    private:
        int *data;
        int size;

    public:
        IntegerArray(int size) {
            data = new int[size];
            this->size = size;
        }

        IntegerArray(IntegerArray &o) {
            data = new int[o.size];
            this->size = o.size;
            for(int i = 0; i < size; ++i)
                data[i] = o.data[i];
        }

        ~IntegerArray() {
            delete[] data;
        }

        void setData(int index, int val) {
            if (index >= size){
                throw std::out_of_range ("el indice se pasa del limite");
            }
            data[index] = val;
        }

        int getData(int index) const {
            if (index<0 || index>=size)
                throw  std::out_of_range ( "El indice no es el correcto" );
            return data[index];
        }

        int getSize() const {
            return size;
        }
};

#endif