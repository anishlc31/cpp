#include <iostream>
#include <string>

using namespace std;

class distance {
    int feet ;
    int inch;
public:
    distance(int f=0, int i=0){
        feet=f;
        inch=i;
    }

    void display(){
        cout << feet << "ft" << inch << "inch" << endl;
    }
};

class dist {
    int m, cm;
public:
    dist(int meter=0, int cmeter=0){
        m=meter;
        cm=cmeter;
    }

    operator :: distance(){
        int f, i;
        f = m * 3.28084; // 1 meter = 3.28084 feet
        i = cm * 0.393701; // 1 cm = 0.393701 inch
        return :: distance(f, i);
    }
};

int main(){
    dist d2(5, 50); // Initializing dist object with values
   :: distance d = d2; // Converting dist to distance object
    d.display(); // Displaying the converted distance object
    return 0;
}
