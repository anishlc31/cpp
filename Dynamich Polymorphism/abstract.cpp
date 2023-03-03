#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class Polygon
{
    protected:
    int width, height;
    public:
    void setvalues( int a, int b){
        width = a;
        height = b;
    }
    virtual int area(void)=0;
};

class Rectangle : public  Polygon
{
    public:
    int area(void)
    {
        return ( width*height);
    }
};

int main(){
    Rectangle r;
    Polygon *p = &r;
    p->setvalues(5,5);
    cout<<p->area();
}