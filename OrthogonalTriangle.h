/*Assigment C++:3
  Author: Gal Hilu, ID:315477802
*/
using namespace std;
#ifndef UNTITLED5CPP_ORTHOGONALTRIANGLE_H
#define UNTITLED5CPP_ORTHOGONALTRIANGLE_H
#include "Shape.h"
class OrthogonalTriangle: public Shape{
        private:
        double side;
        public:
        OrthogonalTriangle(char*,int,int);
        ~OrthogonalTriangle();
        void draw();
        virtual double getArea();
        virtual double getPerimeter();
        virtual void print();
};
#endif //UNTITLED5CPP_ORTHOGONALTRIANGLE_H
