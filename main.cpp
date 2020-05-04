#include <iostream>
#include "Point.h"
#include "A.h"
using namespace std;

int main()

{
    Rectangle rec;
    rec.left_top.set_x_y(-2,2);
    rec.left_bot.set_x_y(-2,-2);
    rec.right_bot.set_x_y(4,2);
    rec.right_top.set_x_y(4,-2);
    rec.height(rec.left_top,rec.left_bot);
    rec.width(rec.right_top,rec.left_top);
    rec.area(rec.w,rec.h);
    cout << rec.h <<endl;
    cout << rec.w <<endl;
    cout << rec.a;


    return 0;
}
