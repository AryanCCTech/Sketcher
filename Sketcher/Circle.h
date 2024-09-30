#pragma once
#include "Point.h"
#include <iostream>
using namespace std;
class Circle{
    public:
    Point o;
    double radius;
    Circle();
    Circle(Point o,double radius);
    ~Circle();
    void get_Coord();
    void get_Circumference();
};