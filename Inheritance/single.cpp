#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class Studnet 
{
    
    int age;
    public:
    Studnet ( int a){
        
        age =a;
    }



void display(){
    cout <<age;
}
};

class ForignStu : public Studnet
{
    int country;
    public:
    ForignStu(int n, int a ):Studnet(a)
    {
         country= n;
    }
    void displayFor(){
        display();
        cout<<country;
    }
};

int main()
{

    Studnet s(19);
    ForignStu fa(19, 31);
    fa.displayFor();
    s.display();
}