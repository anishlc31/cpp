#include<iostream>
#include<string>

using namespace std;

class total
{
    float principle,time,rate;
   
    public:
     float findintrest(){
        return principle*time*rate/100;
    }
    void setdata(float p,float t ,float r)
    {
        principle=p;
        time=t;
        rate=r;
    }

    float findtotal(){
        return principle + findintrest();
    }
};

int main(){
    total ta;
    float p,t,r;
    cin>>p>>t>>r;
    ta.setdata(p,t,r);
    cout<<ta.findtotal();
}