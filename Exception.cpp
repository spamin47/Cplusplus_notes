#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception{
    const char * what () const throw () {
        return "My C++ exception";
    }
};

double divide_a_b(int a, int b){
    if(b == 0){
        throw "Division by zero condition!";
    }
    return a/b;
}

int main(){
    int a = 10;
    int b = 0;
    double z = 0;
    try{
        cout<<divide_a_b(a,b)<<endl;
    }catch(const char* msg){
        cout<<msg<<endl;
    }

    try{
        throw MyException();
    }catch(MyException& e){
        //Other errors
    }

    return 0;
}