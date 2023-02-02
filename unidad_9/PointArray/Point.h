#ifndef __POINT_H__
#define __POINT_H__

class Point
{
    private:    
        int x, y;
    public:
        Point(int = 0, int = 0);
        void setX(int);
        void setY(int);
        int getX() const;
        int getY() const;
        void print() const;
        
};


Point::Point(int _x, int _y) : x{_x}, y{_y} {}

void Point::setX(int x){
    this->x = x;
}

void Point::setY(int y) {
    this->y = y;
}

int Point::getX() const {
    return this->x;
}

int Point::getY() const{
    return this->y;
}

void Point::print() const {
    std::cout << "(" << x << ", " << y << ")";
}


#endif