#pragma once
#include <iostream>
#include "writer.h"
using namespace std;
class Point{
    public : 
    double x;
    double y;
    Point();
    Point(double x, double y);
    ~Point();
    void get_coord();
};