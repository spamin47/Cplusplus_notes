#include <iostream>
using namespace std;
#include "cs144_TestClass.h"


class TestClass {
    public:
    int x;
    private:
    int y;

    public:
    TestClass(int num){
        x = num;
    }


    void changeY(int num){
        y = num;
    }
    int getY(){
        return y;
    }
};

int main(){
    
    TestClass myObj (10);
    
     cout<<myObj.x<<endl;
     myObj.changeY(9);
     cout<<myObj.getY()<<endl;

    return 0;
}