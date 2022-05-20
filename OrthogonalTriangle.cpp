/*Assigment C++:3
  Author: Gal Hilu, ID:315477802
*/
using namespace std;
#include <iostream>
#include <cmath>
#include "OrthogonalTriangle.h"

OrthogonalTriangle::OrthogonalTriangle(char* c,int w,int s):Shape(c , w){
    side=s;
}
OrthogonalTriangle::~OrthogonalTriangle(){

}
void OrthogonalTriangle:: draw(){
    int i=1;
    while (i<=side){    //print lines longer by 1 until a line in length of side
        for(int s=0;s<i;s++)
            cout<<"* ";
        cout<<endl;
        i++;
    }
    return;
}
double OrthogonalTriangle::getArea(){
    return (side*side)/2;
}
double OrthogonalTriangle::getPerimeter(){
    return (side*2)+ sqrt(2*pow(side,2));
}
void OrthogonalTriangle::print() {
    cout << "orthogonal triangle details:" << endl;
    cout << "color=" << color << ", width=" << width << ", side=" << side << endl;
    cout << "area=" << getArea() << ", perimeter=" << getPerimeter() << endl;
    draw();
    return;
}