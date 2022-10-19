#include <iostream>
using namespace std;
#include <assert.h>
class Rectangle{
    public:
        int height;
        int width;

        Rectangle(){width = 0; height = 0;}
        Rectangle(int w, int h){width = w; height = h;}

        int area(){return height*width;}
        int get_height(){return height;}
        int get_width(){return width;}
        bool check_if_square(){return width == height;}

        virtual void set_width(int w){width = w;}
        virtual void set_height(int h){height = h;}
};
class Square:public Rectangle{
    public:
        Square(int w,int h){width = w,height = h;}
        void set_width(int w){width = w;height = w;}
        void set_height(int h){height = h;width = h;}
};
void check_area(Rectangle& rect){
    int w = rect.width;
    int h = rect.height;
    rect.height = 10;
    assert((w*10) == rect.area());
    cout<<"Finished assertion1"<<endl;
    assert(rect.check_if_square());
    cout<<"Finished assertion2"<<rect.check_if_square()<<" "<<rect.get_height()<<" "<<rect.get_width() <<endl;
};

int main(){
    Square s(4,10);
    check_area(s);
    cout<<"test"<<endl;
    return 0;
}