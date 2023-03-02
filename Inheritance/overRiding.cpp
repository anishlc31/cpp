#include<iostream>
#include<string>
#include<cstring>

using namespace std;


class A {
    public :
    void show(){
        cout<<" i love milee";
    }
};

class B : public A
{
   public:
   void show()
   {
    cout <<"i love nisha";
   }
};

int main(){
    B b;
    b.show();
     b.A :: show();
}