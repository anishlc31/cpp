#include<iostream>
#include<string>

using namespace std;

class interest {
    int p,r, y;
    float amount;
    public:
    interest(int pa, int n, int rate=10);
    void cal(void);

};
interest:: interest(int pa ,int n, int rate){
    p=pa;
    y=n;
    r=rate;
}
void interest::cal(void){
    amount=p +(float)(p*y*r)/100;
    cout<<amount;
}

int main(){
    interest i1(1000,2);
    i1.cal();

}