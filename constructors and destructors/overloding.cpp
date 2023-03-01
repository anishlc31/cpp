#include<iostream>
#include<string>

using namespace std;

class item {
    int code ,price;
    public:
    item(){
        code=price=0;
    }
    item(int c, int p)
    {
        code=c;
        price=p;
    }
    item(item &x){
        code=x.code;
        price=x.price;
    }
    void display(){
        cout<<code<<price<<endl;
    }
};

int main(){
    item i1;
    item i2(100,101);
    item i3(i2);
    i1.display();
        i2.display();


}