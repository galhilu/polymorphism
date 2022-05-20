
using namespace std;

#include "Array.h"
#include <iostream>
#include <string.h>
#include "Square.h"
#include "Circle.h"
#include "OrthogonalTriangle.h"
#include "Shape.h"

void printmenu(){
    cout<<"~~main menu~~"<<endl;
    cout<<"1)add a shape"<<endl;
    cout<<"2)delete a shape by index"<<endl;
    cout<<"3)print a shape by index"<<endl;
    cout<<"4)exit program"<<endl;
}
int main(){
    Array<Shape*> arr;

    int choice1,choice2,index,width,side;
    char color[7];
    Shape* nshape= nullptr,*temp;
    while(1){
        printmenu();
        cin>>choice1;
        try {
            switch (choice1) {
                case 1:
                    while (1) {
                        try {
                            cout<<"choose 1 for square 2 for circle 3 for triangle:"<<endl;
                            cin >> choice2;
                            if (choice2 != 1 && choice2 != 2 && choice2 != 3)
                                throw (1);                                          //choice not in range loop to try again
                            switch (choice2) {
                                case 1:                                             //square creation
                                    cout<<"enter square color:"<<endl;
                                    cin>>color;
                                    if(strcmp(color,"red")!=0&&strcmp(color,"blue")!=0&&strcmp(color,"green")!=0)
                                        throw(2);                                              //invalid color input loop to try again
                                    cout<<"enter square width"<<endl;
                                    cin>>width;
                                    if(width<=0)
                                        throw (3);                                          //invalid dimension
                                    cout<<"enter square side"<<endl;
                                    cin>>side;
                                    if(side<=0)
                                        throw (3);                                          //invalid dimension
                                    nshape=new Square(color,width,side);
                                    break;

                                case 2:                                                //circle creation
                                    cout<<"enter circle color:"<<endl;
                                    cin>>color;
                                    if(strcmp(color,"red")!=0&&strcmp(color,"blue")!=0&&strcmp(color,"green")!=0)
                                        throw(2);                                            //invalid color input loop to try again
                                    cout<<"enter circle width"<<endl;
                                    cin>>width;
                                    if(width<=0)
                                        throw (3);                                          //invalid dimension
                                    cout<<"enter circle radius"<<endl;
                                    cin>>side;
                                    if(side<=0)
                                        throw (3);                                          //invalid dimension
                                    nshape=new Circle(color,width,side);
                                    break;

                                case 3:                                                     //triangle creation
                                    cout<<"enter triangle color:"<<endl;
                                    cin>>color;
                                    if(strcmp(color,"red")!=0&&strcmp(color,"blue")!=0&&strcmp(color,"green")!=0)
                                        throw(2);                                              //invalid color input loop to try again
                                    cout<<"enter triangle width"<<endl;
                                    cin>>width;
                                    if(width<=0)
                                        throw (3);                                          //invalid dimension
                                    cout<<"enter triangle side"<<endl;
                                    cin>>side;
                                    if(side<=0)
                                        throw (3);                                          //invalid dimension
                                    nshape=new OrthogonalTriangle(color,width,side);
                                    break;

                            }

                        }
                        catch (int err) {
                            if (err == 1) {
                                cout << "choice not in range try again" << endl;
                                continue;
                            }
                            if (err == 2) {
                                cout << "invalid color pleas pick red green or blue" << endl;
                                continue;
                            }
                            if (err == 3) {
                                cout << "shape dimension cant be zero or negative try again" << endl;
                                continue;
                            }

                        }
                        arr.add(nshape);
                        break;
                    }
                    continue;


                case 2:
                    cout<<"please enter an index to delete:"<<endl;
                    while (1){
                        cin>>index;
                        try {
                            if (arr.getSize() == 0)                 //array is empty print error and back to menu
                                throw(1);
                            if(index>arr.getSize()-1||index<0)     //index not in range loop to try again
                                throw (2);
                            temp=arr.remove(index);
                            delete temp;

                            cout << "shape in index " << index << " was deleted successfully" << endl;
                            break;
                        }
                        catch (int err) {
                            if(err==1){
                                cout << "array is empty, add a shape first " << endl;
                                break;
                            }
                            if (err==2){
                                cout<<"index not in range try again"<<endl;
                                continue;
                            }
                        }
                    }
                    continue;


                case 3:
                    cout<<"please enter an index to print:"<<endl;
                    while (1) {
                        cin >> index;
                        try {
                            if (arr.getSize() == 0)                 //array is empty print error and back to menu
                                throw(1);
                            if(index>=arr.getSize()||index<0)     //index not in range loop to try again
                                throw (2);
                            arr[index][0]->print();
                            break;

                        }
                        catch (int err) {
                            if (err == 1) {
                                cout << "array is empty, add a shape first " << endl;
                                break;
                            }
                            if (err == 2) {
                                cout << "index not in range try again" << endl;
                                continue;
                            }
                        }
                    }
                    continue;


                case 4:
                    cout << "goodbye!" << endl;
                    return 0;


                default:
                    throw (1);              //invalid choice
            }
        }
        catch (int err){                //will catch all throws and print the appropriate error message
            if(err==1)
                cout<<"choice is out of range,try again"<<endl;
        }
    }

}