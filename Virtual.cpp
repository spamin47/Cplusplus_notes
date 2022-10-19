#include <iostream>
using namespace std;


class Box {
    public:
    //pure virtual function. Class is abstract.
    virtual double getVolume() = 0;

    private:
        double length;  //length of a box
        double breadth; //breadth of a box
        double height; //height of a box
};

class Shape{
    public:
        //pure virtual function providing interface framework. Class is abstract due to being virtual
        virtual int getArea() = 0;
        void setWidth(int w){

            width = w;
        }
        void setHeight(int h){
            height = h;
        }


    protected:
        int width;
        int height;

};

class Rectangle: public Shape{
    public:
        int getArea(){
            return (width*height);
        }
};
class Triangle: public Shape{
    public:
        int getArea(){
            return (width*height)/2;
        }
};

int main(){

    Triangle t;
    t.setHeight(2);
    t.setWidth(3);


    cout<<t.getArea()<<endl;

    return 0;
}