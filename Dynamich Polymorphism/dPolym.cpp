#include<iostream>

using namespace std;
class A 
{
    public:
    virtual void show(){
        cout <<"this is a";
    }
};

class B: public A
{
    public:
     void show(){
        cout <<"this is b";
    }
};

class C: public A
{
    public:
     void show(){
        cout <<"this is c";
    }
};

int main(){
    A *p, a;
    B b;
    C c;
    p= &b;
    p->show();
}