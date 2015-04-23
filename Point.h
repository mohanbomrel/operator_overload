#ifndef POINT_H
#define POINT_H
using namespace std;

class Point
{
private:
    int x =0;
    int y = 0;
public:
    Point(int, int);
    void setX(int);
    int getX();
    void setY(int);
    int getY();
    void setXY(int,int);
    void print();

    Point operator + (Point p0 ) const;
};
#endif // POINT_H
