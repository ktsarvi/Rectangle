#ifndef A_H
#define A_H
#include "Point.h"
#include <iostream>
using namespace std;

class Rectangle
{
    public:
    Rectangle();
    double height(Point2f,Point2f);
    double width(Point2f,Point2f);
    double area(double,double);
        double h;
        double w;
        double a;
        Point2f left_top;
        Point2f right_top;
        Point2f left_bot;
        Point2f right_bot;
         friend ostream& operator<<(ostream& os, const Rectangle& rec);
};




#endif // A_H
