#include <iostream>
using namespace std;

/*
Operator Overloading
- C++ allows you to specify more than one definition for a function name or an operator in the same scope, which is called
function overloading and operator overloading

Function Overloading
- Can have multiple definitions for the same function name in the same scope
- The definition of the function must differ from each other by the types and/or the number of arguments in the argument list.
- You cannot overload function declarations that differ only by return type

Overloading Operator
    Ex: Say you have 2 Box class objects that when added to together results in a new Box class Object
        i.e. Box operator+(const Box&)

*/

//overloading function
class printData{
    public:
        void print(int i){
            cout<<"int: "<<i<<endl;
        }
        void print(double d){
            cout<<"double: "<<d<<endl;
        }
};

//Overloading Operator
class Box{
    public:
        Box(){

        }
        Box(double l, double b, double h){
            length = l;
            breadth = b;
            height = h;
        }
        double getVolume(){
            return length*breadth*height;
        }
        double getLength(){
            return length;
        }
        double getBreadth(){
            return breadth;
        }
        double getHeight(){
            return height;
        }

        //operator overloading for +. 
        Box operator+(const Box& b){
            Box box;
            box.length = this->length +b.length;
            box.breadth = this->breadth + b.breadth;
            box.height = this->breadth + b.height;
            return box;
        }

    private:
        double length;
        double breadth;
        double height;
};

int main(){
    //overloading function
    printData pd;
    pd.print(1);
    pd.print(2.0);
    
    //operator overloading
    Box box1(2,2,2);
    Box box2(3,3,3);
    Box box3;

    box3 = box1+box2;
    cout<<box3.getVolume()<<endl;
    return 0;
}