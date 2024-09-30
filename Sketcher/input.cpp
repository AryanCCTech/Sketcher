#include <iostream>
#include "input.h"
#include "Point.h"
#include "Rect.h"
#include "Line.h"
#include "Square.h"
#include "Triangle.h"
using namespace std;
void input::get_input(){
    string newstr,line;
    int shape_choice,num,len;
    double x1,x2,x3,x4,y1,y2,y3,y4;
    vector<string> data_;
    vector<Point> pts; 
    Point p1(0.0,0.0);
    Point p2(0.0,0.0);
    Point p3(0.0,0.0);
    Point p4(0.0,0.0);
    cout << "\n Welcome To Sketcher\n";
    cout << "\n  -----------------------------\n";
    cout << "  | Choose shape to draw:     |\n";
    cout << "  |1. Point                   |\n";
    cout << "  |2. Line                    |\n";
    cout << "  |3. Square                  |\n";
    cout << "  |4. Rectangle               |\n";
    cout << "  |5. Triangle                |\n";
    cout << "  |6. Polygon                 |\n";
    cout << "  |7. Exit                    |\n";
    cout << "  -----------------------------\n";
    cout << "Enter your choice: ";
    cin >> shape_choice;
    if (shape_choice == 1){
        cout << "Enter x coordinate of your point: ";
        cin >> x1;
        cout << "Enter y coordinate of your point: ";
        cin >> y1;
        p1.x = x1;
        p1.y = y1;
        newstr = to_string(p1.x) + " " + to_string(p1.y);
        data_.push_back(newstr);
        p1.get_coord();
    }
    else if (shape_choice == 2){
        cout << "Enter x and y coordinate of first point: ";
        cin >> x1 >> y1;
        cout << "Enter x and y coordinate of second point: ";
        cin >> x2 >> y2;
        p1.x = x1;
        p1.y = y1;
        p2.x = x2;
        p2.y = y2;
        Line l(p1,p2);
        newstr = to_string(p1.x) + " " + to_string(p1.y);
        data_.push_back(newstr);
        newstr = to_string(p2.x) + " " + to_string(p2.y);
        data_.push_back(newstr);
        l.get_Coord();
    }
    else if (shape_choice == 3){
        cout << "Enter x and y coordinate of first point: ";
        cin >> x1 >> y1;
        cout << endl;
        cout << "Enter the len of side: ";
        cin >> len;
        cout << endl;
        p1.x = x1;
        p1.y = y1;
        p2.x = x1;
        p2.y = y1 + len;
        p3.x = x1 + len;
        p3.y = y1 + len;
        p4.x = x1 + len;
        p4.y = y1;
        newstr = to_string(p1.x) + " " + to_string(p1.y);
        data_.push_back(newstr);
        newstr = to_string(p1.x) + " " + to_string(p1.y+len);
        data_.push_back(newstr);
        newstr = to_string(p1.x+len) + " " + to_string(p1.y+len);
        data_.push_back(newstr);
        newstr = to_string(p1.x+len) + " " + to_string(p1.y);
        data_.push_back(newstr);
        newstr = to_string(p1.x) + " " + to_string(p1.y);
        data_.push_back(newstr);
        Rect r(p1,p2,p3,p4);
        r.get_Coord();
    }
    else if (shape_choice == 4){
        cout << "Enter x and y coordinate of first point: ";
        cin >> x1 >> y1;
        cout << endl;
        cout << "Enter x and y coordinate of second point: ";
        cin >> x2 >> y2;
        cout << endl;
        cout << "Enter x and y coordinate of third point: ";
        cin >> x3 >> y3;
        cout << endl;
        cout << "Enter x and y coordinate of square point: ";
        cin >> x4 >> y4;
        p1.x = x1;
        p1.y = y1;
        p2.x = x2;
        p2.y = y2;
        p3.x = x3;
        p3.y = y3;
        p4.x = x4;
        p4.y = y4;
        newstr = to_string(p1.x) + " " + to_string(p1.y);
        data_.push_back(newstr);
        newstr = to_string(p2.x) + " " + to_string(p2.y);
        data_.push_back(newstr);
        newstr = to_string(p3.x) + " " + to_string(p3.y);
        data_.push_back(newstr);
        newstr = to_string(p4.x) + " " + to_string(p4.y);
        data_.push_back(newstr);
        newstr = to_string(p1.x) + " " + to_string(p1.y);
        data_.push_back(newstr);
        Square s(p1,p2,p3,p4);
        s.get_Coord();
    }
    else if (shape_choice == 5){
        cout << "Enter x and y coordinate of first point: ";
        cin >> x1 >> y1;
        cout << endl;
        cout << "Enter x and y coordinate of second point: ";
        cin >> x2 >> y2;
        cout << endl;
        cout << "Enter x and y coordinate of third point: ";
        cin >> x3 >> y3;
        cout << endl;
        p1.x = x1;
        p1.y = y1;
        p2.x = x2;
        p2.y = y2;
        p3.x = x3;
        p3.y = y3;
        newstr = to_string(p1.x) + " " + to_string(p1.y);
        data_.push_back(newstr);
        newstr = to_string(p2.x) + " " + to_string(p2.y);
        data_.push_back(newstr);
        newstr = to_string(p3.x) + " " + to_string(p3.y);
        data_.push_back(newstr);
        newstr = to_string(p1.x) + " " + to_string(p1.y);
        data_.push_back(newstr);
        Triangle s(p1,p2,p3);
        s.get_Coord();
    }
    else if (shape_choice == 6){
        cout << "Enter number of points: ";
        cin >> num;
        for (int i=0; i< num; i++) {
            getline(cin, line);
            cout << "Enter x and y coordinate of the point: \n";
            data_.push_back(line);
        }
    }   
    Writer w;
    w.writer(data_);
}