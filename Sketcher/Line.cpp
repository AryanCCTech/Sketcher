#include <iostream>
#include "Line.h"
#include "Point.h"
#include "writer.h"
using namespace std;
Line::Line(){
    Point p1,p2;
}
Line::Line(Point p1,Point p2):p1(p1),p2(p2){ }
Line::~Line(){ };
void Line::get_Coord(){
    cout << "Center (x1 = " << p1.x <<",y1 = "<< p1.y <<")" << "(x2 = " << p2.x <<",y2 = "<< p2.y <<")" ;
}