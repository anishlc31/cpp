#include <iostream>
#include <string>

using namespace std;


class test {


 int a;
 int b;

 public:
 test()
 {
    a=0;
    b=0;
    cout<<"memort is allocted";
 }

 ~test (){
    cout<<a<<b;
 }
};

int main(){
    test t;
}