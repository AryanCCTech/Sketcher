#pragma once
#include "Point.h"
using namespace std;
class Triangle{
    public:
    Point p1,p2,p3;
    Triangle();
    Triangle(Point p1,Point p2,Point p3);
    ~Triangle();
    void get_Coord();
    void get_Perimeter();
};
