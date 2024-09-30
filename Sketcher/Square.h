#pragma once
#include "Point.h"
#include "writer.h"
using namespace std;
class Square{
    public:
    Point p1,p2,p3,p4;
    Square();
    Square(Point p1,Point p2,Point p3,Point p4);
    ~Square();
    void get_Coord();
    void get_Perimeter();
};
