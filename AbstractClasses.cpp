#include <iostream>
using namespace std;

class MyClass{
    public:
        MyClass(){}

        void greeting(){
            cout<<"Hello world!"<<endl;
        }

        virtual int doSomething()=0; //pure virtual method
};

class MyOtherClass:MyClass{
    public:
        MyOtherClass(){}
};

class MyThirdClass:MyOtherClass{
    public:
        MyThirdClass(){}
    
        int doSomething(){
            cout<<"Doing something"<<endl;
            return 1;
        }
};

int main(){

    MyThirdClass *mc = new MyThirdClass();
    mc->doSomething();
    return 0;
}