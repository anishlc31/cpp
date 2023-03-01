#include<iostream>
#include<string>

using namespace std;

class student {
    int roll;
    char name[20];
    static int count;
    public:
    void getdata(){
cout<<"Enter rool and name";
cin>>roll>>name;
count++;
    }

    void dispalycount(){
        cout<<count<<endl;
    }
};

int student ::count=0;

int main(){
    student s1 ,s2 ,s3;

    s1.dispalycount();
        s2.dispalycount();
    s3.dispalycount();
    s1.getdata();
    s1.dispalycount();

}