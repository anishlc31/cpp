#include<iostream>
using namespace std;

class test {
     int x ,y ;
     public:
     test (){
        x=0;
        y=0;
        cout <<"memory is allocated"<<endl;

     }

~test (){
    cout <<x<<y<<endl;

}

int main(){
   test p;
}
      
};