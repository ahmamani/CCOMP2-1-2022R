#ifndef __POINT_H__
#define __POINT_H__

template<typename T>
class Point {
    public:
        Point(const T u = 0, const T v = 0) : x(u), y(v){}
        T getX() const;
        T getY() const;
        void setX(const T u);
        void setY(const T v);
        void print() const;
    private:
        T x, y;
};

template<typename T>
T Point<T>::getX() const {
    return x;
}

template<typename T>
T Point<T>::getY() const {
    return y;
}

template<typename T>
void Point<T>::setX(const T u) {
    x = u;
}

template<typename T>
void Point<T>::setY(const T v) {
    y = v;
}

template<typename T>
void Point<T>::print() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

#endif