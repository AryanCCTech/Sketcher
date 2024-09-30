#include <iostream>
#include "Triangle.h"
#include "Point.h"
using namespace std;
Triangle::Triangle(){
    Point p1 = {0.0,0.0};
    Point p2 = {p1.x ,p1.y + 1.0};
    Point p3 = {p1.x + 1.0,p1.y + 1.0};
};
Triangle::Triangle(Point p1,Point p2,Point p3):p1(p1),p2(p2),p3(p3){ }
Triangle::~Triangle(){ }
void Triangle::get_Coord(){
    cout <<"Three Coordinates are: "<< endl;
    p1.get_coord();
    p2.get_coord();
    p3.get_coord();
}
void Triangle::get_Perimeter(){
    double perim = (abs((p1.x-p2.x)+(p1.y-p2.y))+abs((p2.x-p3.x)+(p2.y-p3.y))+abs((p3.x-p1.x)+(p3.y-p1.y)));
    cout << "Perimeter of Triangle is " << perim << endl;
}