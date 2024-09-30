#pragma once
#include "Point.h"
#include <iostream>
#include <vector>
using namespace std;
class Polygon{
    public : 
    vector<Point> PolyVec;
    Polygon();
    Polygon(vector<Point> PolyVec);
    void getcoord();
};