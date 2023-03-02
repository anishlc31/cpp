#include<iostream>
#include<string>

using namespace std;

class distance
{
    int feet;
    int inches;
     public:
    void getdata(){
      cin >>feet>>inches;
    }
    distance operator +(distance d2){
        distance d3;
        d3.feet=feet+d2.feet;
        d3.inches=inches+d2.inches;
        return d3;
    }

    void display(){
        cout<<feet<<" "<<inches<<endl;
    }
};

int main(){
    ::distance d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3=d1+d2;
    d1.display();
    d3.display();
    return 0;
}
