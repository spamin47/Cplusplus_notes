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
    thread first (print(10,20,"printing from 1st thread"));
    thread second (print(10,20,"printing from 2nd thread"));
    thread third (print(10,20,"printing from 3rd thread"));
    thread fourth (print(10,20,"printing from 4th thread"));

    first.join();
    second.join();
    third.join();
    fourth.join();
    cout<<"All threads completed for scenario 1"<<endl;

    thread first1 (print(10,10,"printing from 1st thread"));
    thread second2 (print(10,30,"printing from 2nd thread"));
    thread third3 (print(10,20,"printing from 3rd thread"));
    thread fourth4 (print(10,40,"printing from 4th thread"));

    first1.join();
    second2.join();
    third3.join();
    fourth4.join();
    cout<<"All threads completed for scenario 2"<<endl;
    return 0;
}