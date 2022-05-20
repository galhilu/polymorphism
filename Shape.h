/*Assigment C++:3
  Author: Gal Hilu, ID:315477802
*/
using namespace std;
#ifndef UNTITLED5CPP_SHAPE_H
#define UNTITLED5CPP_SHAPE_H
class Shape {
        protected:
        char* color;                //shapes color (red,green,blue)
        int width;                  //shapes width
        public:
        Shape(char*,int);
        virtual ~Shape()=0;
        virtual double getPerimeter();             //calculates perimeter according to the shape
        virtual double getArea();                  //calculates area according to the shape
        virtual void print();                       //print shape details
};
#endif //UNTITLED5CPP_SHAPE_H