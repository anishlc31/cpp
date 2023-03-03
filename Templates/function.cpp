#include<iostream>
#include<string>
using namespace std;
template<class T>

T getMax (T a, T b){
    T result;
    result = (a>b)? a: b;
    return result;
}

int main(){
    int a =5 ,b=6,k;
    float l=10 , m=5,n;
    char x ='a',y='b',z;
    k= getMax(a,b);
    n=getMax(l,m);
    z=getMax(x,y);
    cout <<k<<n<<z;
}