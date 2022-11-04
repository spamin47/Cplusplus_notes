#include <iostream>
using namespace std;


class Base{
    public:
        //no matter where it is derived from, it's still gonna be called
        Base(){
            cout<<"Constructing Base"<<endl;
        }
        //no matter where it is derived from, it's still gonna be called
        virtual ~Base(){
            cout<<"Destructing Base"<<endl;
        }
};

class Derived: public Base{
    public:
        Derived(){
            cout<<"Constructing Derived"<<endl;
        }
        ~Derived(){
            cout<<"Destructing Derived"<<endl;
        }

};

int main(){
    Derived *d = new Derived();
    Base *b = d;
    delete b;
    // delete d;
    return 0;
}