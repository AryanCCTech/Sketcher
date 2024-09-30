#include <iostream>
#include "Point.h"
using namespace std;
Point::Point(){
    double x = 0.0;
    double y = 0.0;
}
Point::Point(double x, double y):x(x),y(y){}
Point::~Point(){};
void Point::get_coord(){
    cout << "(x = "<<x<<", y = "<<y<<")"<<endl;
}