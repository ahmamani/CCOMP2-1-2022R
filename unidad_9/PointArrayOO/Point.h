#ifndef __POINT_H__
#define __POINT_H__
#include<iostream>
#include <ostream>
class Point
{
    private:    
        int x, y;
    public:
        friend std::ostream& operator<<(std::ostream& output, Point &o);
        Point(int = 0, int = 0);
        void setX(int);
        void setY(int);
        int getX() const;
        int getY() const;
        
};

// inline std::ostream& operator<<(std::ostream& output, Point &o){
//     output<<"("<<o.x<<","<<o.y<<")";
//     return output;
// }

#endif