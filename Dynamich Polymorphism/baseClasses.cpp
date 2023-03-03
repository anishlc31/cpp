#include<iostream>

using namespace std;

class Shape 
{
    protected:
    float p,l,b;

    public:
    void setvalue(int x, int y){
        l=x;
        b=y;
    }

};

class Square : public Shape 
{
    public:
    void findPerimeter(){
  p=4*l;
  cout <<p<<endl;
    }
};

int main(){
    Shape bo, *bp;
    Square s;
    bp=&s;
    bp->setvalue(3,3);
    s.findPerimeter();

}