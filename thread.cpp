#include <iostream>
#include <thread>
#include <string.h>
#include <chrono>
using namespace std;
using namespace this_thread;
using namespace chrono;

void print(int n, int m, const string &str){
    sleep_for(milliseconds(m));
    for(int i =0;i<n;i++){
        cout<<str<<endl;
    }
}


int main(){
    thread first (print(10,20,"test print"));
    thread second (print(10,20,"test print"));
    thread third (print(10,20,"test print"));
    thread fourth (print(10,20,"test print"));

    first.join();
    second.join();
    third.join();
    fourth.join();
    cout<<"All threads completed"<<endl;
    return 0;
}