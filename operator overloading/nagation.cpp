#include<iostream>
#include<string>

using namespace std;

class point {

int x,y;
public:
void getdata(){
    cout<<"Enter x and y coordinate"<<endl;
    cin>>x>>y;
}
void display(){
    cout<<x<<y;
}
point operator-(){
    point t;
    t.x=-x;
        t.y=-y;
    return t;
}
};

int main (){
    point p,q;
    p.getdata();
    q=-p;
    q.display();
    }
