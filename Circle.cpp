/*Assigment C++:3
  Author: Gal Hilu, ID:315477802
*/
using namespace std;
#include "Circle.h"
#include <iostream>
Circle::Circle(char* c,int w,int r):Shape(c,w){
    rad=r;
}

Circle::~Circle(){

}

double Circle:: getPerimeter(){
    return rad*2*3.14;
}

double Circle:: getArea(){
    return rad*rad*3.14;
}

void Circle::print() {
    cout << "circle details:" << endl;
    cout << "color=" << color << ", radius=" << rad<<"width="<<width<<endl;
    cout << "area=" << getArea() << ", perimeter=" << getPerimeter() << endl;
    return;
}