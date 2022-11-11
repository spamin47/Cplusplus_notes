#include <iostream>
using namespace std;

//Base class
class MyClass{
    public:
        void myFunction(){
            cout<<"Calling myFunction"<<endl;
        }
};
class MyOtherClass{
    public:
        void myOtherFunction(){
            cout<<"Calling myOtherFunction"<<endl;
        }
};
class MyChildClass:public MyClass,public MyOtherClass{

};

int main(){

    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();

    return 0;
}