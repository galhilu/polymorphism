
using namespace std;
#ifndef UNTITLED5CPP_CIRCLE_H
#define UNTITLED5CPP_CIRCLE_H
#include "Shape.h"
class Circle: public Shape{
        private:
        int rad;        //radius of the circle
        public:
        Circle(char*,int,int);
        ~Circle();
        double getPerimeter();
        double getArea();
        virtual void print();
};
#endif //UNTITLED5CPP_CIRCLE_H
