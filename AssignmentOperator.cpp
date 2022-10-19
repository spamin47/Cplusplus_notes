#include <iostream>
using namespace std;
class MyArray{
    int* array;
    int count;

    public:
        MyArray operator=(const MyArray& other){
            if(this != &other){//prevent invalid use on self

                int *newArray = new int[other.count];
                copy(other.array,other.array+other.count,newArray);

                //2. deallocate old memory
                delete[] array;

                array = newArray;
                count = other.count;

            }
        }
};

int main(){



    return 0;
}