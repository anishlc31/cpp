#include<iostream>
using namespace std;
int* min(int*x,int*y){
    if(*x<*y)
    return x;
    else 
    return y;
}
int main(){
    int a,b;
    cin>>a>>b;
int *m = min(&a,&b);
cout<<*m;
}