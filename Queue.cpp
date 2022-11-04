#include <iostream>
#include <queue>
using namespace std;


int main(){
    queue<int> q;
    q.push(1);
    q.push(30);
    q.push(3);
    cout<<"hello"<<endl;
    int p = q.size();
    cout<<p<<endl;
    q.pop();


    return 0;
}