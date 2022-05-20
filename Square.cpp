
using namespace std;

#include <iostream>
#include "Square.h"
Square::Square(char* c,int w,double s):Shape(c , w){
    side=s;
}



void Square::draw() {
    int rside=(int)side;        //to round side down to an int
    for (int i=0;i<=rside;i++) {
        for (int s = 0; s <= rside; s++)
            cout << "* ";
        cout << endl;
    }
    return;
}
double Square::getArea() {
    return side*side;
}

double Square::getPerimeter() {
    return side*4;
}

void Square::print(){
    cout<<"square details:"<<endl;
    cout<<"color="<<color<<", width="<<width<<", side="<<side<<endl;
    cout<<"area="<<getArea()<<", perimeter="<<getPerimeter()<<endl;
    draw();
    return;
}

Square::~Square()  {};