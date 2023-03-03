#include<iostream>
#include<string>
using namespace std;
template<class T>
class mypair {
    T a,b;
    public:
mypair(T first , T second){
    a=first;
    b=second;
}
T getmax(){
    T retval;
    retval =a>b?a:b;
    return retval;
}
};

int main(){
    mypair<int> object1(100,75);
    cout<<"Larger="<<object1.getmax();
}