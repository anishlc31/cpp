#include<iostream>
#include<string>

using namespace std;
struct currency{
    int rs;
    float paise;
};
int main(){
    currency c1,c3;
    currency c2 ={1234,34};
    cin>>c1.rs;
    cin>>c1.paise;
        c3.paise=c2.paise+c1.paise;

    if(c3.paise>=100.0){
        c3.paise-=100.0;
        c3.rs++;
    }
    
    c3.rs+=c2.rs+c1.rs;
    cout<<c3.rs;

}