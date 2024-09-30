#include "Polygon.h"
#include "Point.h"
using namespace std;
Polygon::Polygon(){};
Polygon::Polygon(vector<Point> PolyVec){ };
void Polygon::getcoord(){
    for (int i = 0; i < PolyVec.size(); i++)  {  
        cout << "(" << PolyVec[i].x <<","<< PolyVec[i].y << ") " << endl;
    } 
}