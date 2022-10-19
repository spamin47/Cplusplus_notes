#include <iostream>
using namespace std;


class OtherClass;

class Base{
    public:
        Base();
        int getData(OtherClass &oc);
};

Base::Base(){};

class OtherClass{
    private:
        int base_a;
    public:
    //give method, getData() from class, Base access to internal data of OtherClass class
        OtherClass();
        friend int Base::getData(OtherClass &oc); 
        
};

OtherClass::OtherClass(){
    base_a = 21;
}

int Base::getData(OtherClass &oc){
    return oc.base_a;
}

int main(){

    Base b;
    OtherClass oc;
    cout<<"Base info: "<<b.getData(oc)<<endl;

    int y = 11;
    int x = 10;
    int &r = x;
    //int &r1;
    //r1 = x; //cannot do this! Must be declared and initialized in one line

    //int &r = y; //cannot do this!

    return 0;
}