#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;


class Point2f
{
    public:
    double x;
    double y;

    void set_x_y(double,double);
       friend ostream& operator<<(ostream& os, const Point2f& B);
};




#endif // POINT_H
