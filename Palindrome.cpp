#include <iostream>
using namespace std;
#include <string.h>

bool palindromeRecursive(string s,int l,int r){
    if(l>=r){
        return true;
    }
    if(s.at(l) != s.at(r)){
        return false;
        cout<<"Does not match: "<<s.at(l)<<" "<<s.at(r)<<endl;
    }
    return palindromeRecursive(s,l+1,r-1);
}
bool palindromeIterative(string s){
    int len = s.length();
    for(int i = 0;i<len/2;i++){
        // cout<<"Char: "<<s.at(i)<<" "<<s.at(len-1-i)<<endl;
        if(s.at(i)!=s.at(len-i-1)){
            cout<<"Does not match: "<<s.at(i)<<" "<<s.at(len-1-i)<<endl;
            return false;
        }
    }
    return true;
}

int main(){
    string s = "bob";
    cout<<palindromeIterative(s)<<endl;
    cout<<palindromeRecursive(s,0,s.length()-1)<<endl;
    return 0;
}