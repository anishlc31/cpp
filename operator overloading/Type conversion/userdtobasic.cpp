#include <iostream>
#include <string>

using namespace std;

class distance {
    int feet ;
    int inch;
public:
distance(int f,int i){
    feet=f;
    inch=i;
}

operator float()
{
    float a =feet +inch/12.0;
    return a;
}
};

int main(){
    :: distance d(8,19);
    float x = (float)d;
    cout <<x;
}