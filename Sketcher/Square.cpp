#include <iostream>
#include "Square.h"
#include "Point.h"
using namespace std;
Square::Square(){
    Point p1 = {0.0,0.0};
    Point p2 = {p1.x ,p1.y + 1.0};
    Point p3 = {p1.x + 1.0,p1.y + 1.0};
    Point p4 = {p1.x + 1.0,p1.y };
};
Square::Square(Point p1,Point p2,Point p3,Point p4):p1(p1),p2(p2),p3(p3),p4(p4){ }
Square::~Square(){};
void Square::get_Coord(){
    cout <<"Four Coordinates are: "<< endl;
    p1.get_coord();
    p2.get_coord();
    p3.get_coord();
    p4.get_coord();
}
void Square::get_Perimeter(){
    double perim = (abs((p1.x-p2.x)+(p1.y-p2.y))+abs((p2.x-p3.x)+(p2.y-p3.y))+abs((p3.x-p4.x)+(p3.y-p4.y))+abs((p4.x-p1.x)+(p4.y-p1.y)));
    cout << "Perimeter of Square is " << perim << endl;
}