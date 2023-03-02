#include <iostream>
#include <string>

using namespace std;

class Marks 
{
    int m1;
    int m2;
    public:
    Marks (){
        m1=0;
        m2=0;
    }

    Marks(int i, int j)
    {
        m1=j;
        m2=i;
    }

    void operator=(const Marks&M)
    {
        m1=M.m1;
        m2=M.m2;
    }

    void display(){
        cout <<m1;
        cout<<m2;
    }
};

int main(){
    Marks mark1(45,89);
    Marks mark2(36,59);
    mark1=mark2;
    mark1.display();
}