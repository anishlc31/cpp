#include<iostream>
using namespace std;
void exchange (int a ,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=5,y=6;
    exchange(x,y);
    cout <<x<<y<<endl;
}