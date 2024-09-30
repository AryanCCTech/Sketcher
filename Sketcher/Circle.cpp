#include <iostream>
#include "Circle.h"
#include "Point.h"
using namespace std;
Circle::Circle(){
    Point o;
    double radius = 1.0;
}
Circle::Circle(Point o,double radius):o(o),radius(radius){ }
Circle::~Circle(){ };
void Circle::get_Coord(){
    cout << "Center (x = " << o.x <<",y = "<< o.y <<")" <<" Radius= "<< radius;
}
void Circle::get_Circumference(){
    double circum = 2 * (22/7) * radius;
    cout << "Circumference of Circle is "<< circum << endl;
}