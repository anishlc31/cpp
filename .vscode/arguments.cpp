#include<iostream>
#include<string>

using namespace std;


int divide(int a , int b=2){
    int r;
r=a/b;
return(r);

}

int main(){
    cout<<divide(12);
    cout<<endl;
}