#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(int x, int y)
{
    setX(x);
    setY(y);
    setXY(x,y);
}

void Point::setX(int x)
{
    this->x = x;
}

int Point::getX()
{
    return x;
}

void Point::setY(int y)
{
    this->y = y;
}

int Point::getY()
{
    return y;
}

void Point::setXY(int x, int y)
{
    this->x= x;
    this->y= y;
}
void Point::print()
{
    cout << "(" << getX() << "," << getY() << ")" << endl;
}

Point Point:: operator + (Point p0) const
{
    cout << x  <<"," << y << ","; // It prints the value of x and y on each object calling
    return Point (x+p0.getX(), y+p0.getY());

}
