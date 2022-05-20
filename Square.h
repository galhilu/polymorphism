
using namespace std;
#include "Shape.h"
#ifndef UNTITLED5CPP_SQUARE_H
#define UNTITLED5CPP_SQUARE_H
class Square : public Shape{
        private:
        double side;
        public:
        Square(char*,int,double);
        ~Square();
        void draw();
        virtual double getArea();
        virtual double getPerimeter();
        virtual void print();
};

#endif //UNTITLED5CPP_SQUARE_H
