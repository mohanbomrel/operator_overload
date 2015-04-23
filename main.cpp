/*
Author : Mohan Singh Bomrel
Program: Operator Overloading with Point Class
Date   : 2015-04-23
*/
#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point p1(1,2);
    Point p2(4,5);
    p1.print();
    p2.print();

    cout << "Object p3:\n";
    Point p3 = p1 + p2;
    p3.print();
    cout << "\n";

    cout << "Object p4:\n";
    Point p4  = p1. operator  +( p2);
    p4.print();
    cout << "\n";

    cout << "Object p5:\n";
    Point p5 = p1+p2+p3+p4;
    p5.print();
}
