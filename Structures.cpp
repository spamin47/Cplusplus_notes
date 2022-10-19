#include <iostream>
using namespace std;

struct testStruct{
    int i = 1;
    char c;
};

struct vowel_info{
    int count;
    char vowel;

    int getCount(){return count;}
};

class Base{
    public:
    int x;

    private:
    int y;

    public:
        Base();
        Base(int x);
        Base(int x, int y,double z);

    private:
        int xx;
        int yy;
        double zz;
};

class Der1 : Base {}; //child class Der1 inherit from Base
struct Der2 : Base{}; //child class Der2 inherit from Base

Base::Base(){}
Base::Base(int X){xx = X;};
Base::Base(int xx, int yy, double zz): xx{}, yy{}, zz{3.2}{cout<<yy<<endl;};

int main(){
    //Structures - a way to encapsulate data
    struct testStruct test;
    test.c = 'a';
    cout<<test.c<<" "<<test.i<<endl;

    struct vowel_info test2;
    test2.count = 10;
    test2.vowel = 'e';
    cout<<test2.vowel<<" "<<test2.count<<" "<<test2.getCount()<<endl;

    Der1 d1;
    Der2 d2;

    //d1.x = 2; // this line can't access 'x'
    d2.x = 4;
    //d2.y = 7; //can't access y
    cout<<d2.x<<endl;

    Base b(2,3,4.1);

    return 0;
}