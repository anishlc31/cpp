#include<iostream>
using namespace std;
int g ;
void test(){
    static int s ; //static variable initially hodls 0;
    register int r;
    r=5;
    s=s+r*4;
    cout<<g<<endl;
        cout<<s<<endl;
    cout<<r<<endl;



}

int main(){
    int a;
    g=35;
    a=17;
    test();

     cout<<g<<endl;
        cout<<a<<endl;
}