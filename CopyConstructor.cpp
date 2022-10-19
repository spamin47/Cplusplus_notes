#include <iostream>
using namespace std;

class Tunnel{

    public:
        int getLength(){return *ptr;}
        Tunnel(int length); //simple constructor
        Tunnel(const Tunnel &obj);//copy constructor
        ~Tunnel();//destructor

    private:
        int *ptr;
};
Tunnel::~Tunnel(){
    cout<<"Deconstructor called"<<endl;
    }

Tunnel::Tunnel(int length){
    cout<<"Normal constructor allocating ptr."<<endl;
    //allocate memory for the pointer
    ptr = new int;
    *ptr = length;
}

Tunnel::Tunnel(const Tunnel &obj){
    cout<<"Copy constructor allocating ptr."<<endl;
    //allocate memory for the pointer
    ptr = new int;
    *ptr = *obj.ptr; //copy the value
}

void display(Tunnel obj){
    cout<<"Length of tunnel: "<<obj.getLength()<<endl;
}


int main(){
    Tunnel tunnel(10);
    display(tunnel);

    return 0;
}