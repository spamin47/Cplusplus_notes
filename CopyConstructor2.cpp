#include <iostream>
using namespace std;


class Point{
    int x,y;

    public:
        Point(int x1, int y1){
            x = x1;
            y = y1;
        }
        Point(const Point &obj){
            x = obj.x;
            y = obj.y;
        }
        void printXY(){
            cout<<x<<" "<<y<<endl;
        }
        void setXY(int x1,int y1){
            x = x1;
            y = y1;
        }
};


int main(){
    Point p1(1,2);
    Point p2(p1);
    p1.setXY(3,4);
    p1.printXY();
    p2.printXY();

    return 0;
}