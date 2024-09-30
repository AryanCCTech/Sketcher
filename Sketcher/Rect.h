#pragma once
#include "Point.h"
#include "writer.h"
using namespace std;
class Rect{
    public:
    Point p1;
    Point p2;
    Point p3;
    Point p4;
    Rect();
    Rect(Point p1,Point p2,Point p3,Point p4);
    ~Rect();
    void get_Coord();
    void get_RPerimeter();
};
