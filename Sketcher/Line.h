#pragma once
#include "Point.h"
#include <iostream>
#include "writer.h"
using namespace std;
class Line{
    public:
    Point p1;
    Point p2;
    Line();
    Line(Point p1,Point p2);
    ~Line();
    void get_Coord();
};