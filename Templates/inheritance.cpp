#include <iostream>
#include <string>

using namespace std;

template<class T>
class Base {
   T a;
public:
   void set(T val){
    a=val;
   }
   void display() {
    cout << a;
   }
};

template<class T>
class Derived : public Base<T> {
    int b;
public:
    void set(T val1, T val2) {
        Base<T>::set(val1);
        b = val2;
    }
    void display() {
        Base<T>::display();
        cout << "b " << b;
    }
};

int main() {
    Derived<int> x;
    x.set(100, 75);
    x.display();
    return 0;
}
