#include <iostream>
using namespace std;

class Circle{
    private:
        double radius;

    public:
        void test() const;

};

void Circle::test() const{
    cout<<"test"<<endl;
    // radius = 2.45; //this change is not allowed
}

int main(){

    const int  value = 0;
    // value = 1.1; //error: value is read only
    // value = 1; //error: value is read only

    double d_value = 0.0;
    int a_value = 1;

    const int *m_ptr = &a_value;
    m_ptr = &value; //ok
    m_ptr = &a_value; //ok
    // ptr = &d_value; //error: d_value is a double

    int *const g_ptr = &a_value;
    // g_ptr = &value;//error: cannot change ptr


    return 0;
}