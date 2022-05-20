
using namespace std;

#include "Shape.h"
#include <iostream>

Shape::Shape(char * c, int w) {

    color=c;
    width=w;
}

Shape::~Shape(){

}

double Shape::getPerimeter(){               //shouldn't get here return impossible value as indication
    return -100;
}

double Shape::getArea(){                    //shouldn't get here return impossible value as indication
    return -100;
}

void Shape::print() {
    return;
}