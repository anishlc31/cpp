#include<iostream>
#include<string>

using namespace std;

class item 
{
    int code ,price;
    public:
    void getdata(){
        cin>>code>>price;
    }
    void showdata(){
        cout<<code<<endl;
        cout<<price<<endl;
    }
};

int main(){
    item *a=new item();
    item b;
    a->getdata();
    b.getdata();
    cout <<"first";
    a->showdata();
    cout<<"second";
    b.showdata();
}