#ifndef __POINT_H__
#define __POINT_H__
class Point
{
    private:    
        int x, y;
    public:
        friend std::ostream& operator<<(std::ostream& output,const Point &o);
        Point(int = 0, int = 0);
        void setX(int);
        void setY(int);
        int getX() const;
        int getY() const;
                
};

std::ostream& operator<<(std::ostream& output,const Point &o){
    output<<o.getX()<<" "<<o.getY();
    return output;
}

#endif