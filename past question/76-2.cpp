#include<iostream>

using namespace std;

class distance 
{
    int feet , inches;

    public:
    
        distance(){
            feet = inches=0;
        }
    distance (int f , int in){
        feet=f; inches = in;
    }

    friend ::distance operator + (distance, distance);
    void display(){
        cout<<feet<< "\t"<< inches<<endl;
    }
};

::distance operator + (:: distance x , :: distance y){
:: distance r;

r.feet = x.feet +y.feet;
r.inches = x.inches+y.inches;
r.feet = r.feet +r.inches/12;
r.inches = r.inches%12;

return r;
}

int main()
{
   :: distance d1(5,6),d2(7,8),d3;
   d3=d1+d2;
   d1.display();
   d2.display();
   d3.display();
}