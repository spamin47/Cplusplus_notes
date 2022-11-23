#include <iostream>
using namespace std;

template <class someType>
someType getLargest(someType a, someType b){
    someType large_val;
    large_val = (a > b)? a: b;
    return large_val;
}

template <class T>
class myTwoObjects{
    T a;
    T b;
    public: 
        myTwoObjects(){
            
        }
};

int main(){
    int a = 1;
    int b = 2;

    cout<<getLargest(1,2)<<endl;


    return 0;
}