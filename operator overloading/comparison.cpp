#include <iostream>
#include <string>

using namespace std;

class Time {
    int hr;
    int min;
    int sec;
public:
    void getdata(){
        cin >> hr >> min >> sec;
    }

    bool operator<(Time t){
        int ft,st;
        ft=hr*3600+min*60+sec;
        st=t.hr*3600+t.min*60+t.sec;
        return ft < st;
    }
};

int main(){
    Time t1, t2;
    t1.getdata();
    t2.getdata();
    if(t1<t2){
        cout<<"t2 is greater";
    }else{
        cout<<"t1 is greater";
    }
    return 0;
}
