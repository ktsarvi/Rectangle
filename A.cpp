#include "A.h"


Rectangle::Rectangle()=default;

double Rectangle::height(Point2f left_top,Point2f left_bot){
 h= left_top.y - left_bot.y;
return h;

}
    double Rectangle::width(Point2f right_top,Point2f left_top){
    w=right_top.x - left_top.x;
        return w;
}
    double Rectangle::area(double w,double h){
    a= w * h  ;
        return a;
}


