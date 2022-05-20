

#ifndef UNTITLED5_ARRAY_H
#define UNTITLED5_ARRAY_H

#include <iostream>
#include "Shape.h"

//#include "Shape.h"
using namespace std;
template <class t>
class Array {
        private:
        int size;       //number of element in the Array
        t* head;        //array's head pointer
        int cap;        //number of how many elements tha current memory allocation can hold
        public:
        Array(){
            size=0;
            cap=1;
            head=new t[1];
        }

        ~Array(){
            delete(head);
        };

        void add(t val){         // add element to end
            if(size<cap){           //checks if there is room available
                *(head+size)=val;
                size++;
                return;
            }
            t* temp=new t[size+1];          //no room, allocate a new memory for an array bigger by 1
            for(int i=0;i<size;i++)        //copy all data to new array
                *(temp+i)=*(head+i);
            if (head!=NULL)                 //if we are adding the first element there is nothing to delete
                delete []head;
            head=temp;                      //redefining attributes for new array
            size++;
            cap++;
            *(head+size-1)=val;                 //adding val
            return;
        }
        t remove(int index) {         //delete element by index int
            t val=*(head+index);
            if(size==1){                //in case of 1 element Array
                size=size-1;
                delete[]head;
                return val;
            }
            while(index<size-1){                //run-over each element's data with the next element's data except the last
                *(head+index)=*(head+index+1);
                index++;
            }
            *head+index==NULL;                  //delete last element after  it was copied to new index
            size=size-1;
            return val;
        }


        int getSize(){          // self-explanatory
            return size;
        }
        t* operator [](int i){        //defining index operator for Array
            return head+i;
        }

        friend ostream& operator<<(ostream& os ,Array& arr) {
            for(int i=0;i<arr.getsize();i++)
                os <<arr+i<<endl;
            return os;
        }
};
#endif //UNTITLED5_ARRAY_H
