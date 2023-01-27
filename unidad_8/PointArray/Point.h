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

#endif