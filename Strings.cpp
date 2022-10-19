#include <iostream>
using namespace std;
#include <string>
#include <cstring>
#include <array>

int main(){
    
    // char greeting[6] = {'h','e','l','l','o'};
    char greeting[] = "hello!";

    string test = "hello";
    test[0] = 'C';

    cout<<test<<endl;

    char* temp_str = new char[test.length()+1]; //allocate memory of size test +1
    strcpy(temp_str,test.c_str()); //copy test string into allocated temp_str
    temp_str[1] = 'i'; //change char of index 1 to 'i'
    test = temp_str; //set temp_str to test

    cout<<"Allocated memory: "<<test.capacity()<<endl;
    cout<<"Size: "<<test.size()<<endl;
    cout<<"Empty?: "<<test.empty()<<endl;
    cout<<"Second change: "<<test<<endl; 

    string s0 ("Initial String");
    string s1;
    string s2(s0);
    string s3(s0,8,3);
    string s4("A character sequence");
    string s5("Another character sequence",12);
    string s6(10,'x');
    string s7(10,42);
    string s8(s0.begin(),s0.end()-1);

    cout<<s0<<"\ns1: "<<s1<<"\ns2: "<<s2<<"\ns3: "<<s3<<"\ns4: "<<s4<<"\ns5: "<<s5<<"\ns6: "<<s6<<"\ns7: "<<s7<<"\ns8: "<<s8<<endl;

    string cars[4];
    string other_cars[4] = {"Volvo", "BMW", "Ford","Mazda"};
    int myNum[3] = {10,20,30};
    int mySecondNum[4] = {10,20,30,40};

    int myNumSize = sizeof(myNum); //get number of bytes of the array
    cout<<"Size of myNum array: "<<myNumSize<<endl;

    int SizeOfMyNumObject = sizeof(myNum)/sizeof(myNum[0]);
    cout<<"Size of myNum object: "<<SizeOfMyNumObject<<endl;
    delete[] temp_str; //clean up allocated memory

    array<int,5> myints; //specify what kind of array it works on. In this case, the array will hold 5 integers.
    cout<<".size(): "<<myints.size()<<endl;
    cout<<"sizeof(): "<<sizeof(myints)<<endl;



    return 0; 
}