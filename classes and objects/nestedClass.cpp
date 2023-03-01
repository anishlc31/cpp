#include<iostream>
#include<string>

using namespace std;

class Employee 
{

    public:
    void getdata(){
        cin>>eid>>salary>>ename;
        bd.getDOB();
    }
 
    void display(){
        cout<<eid<<salary<<ename;
        bd.displayDOB();
    }

    class DOB {
        int y,m,d;
        public:

        void getDOB(){

         cin>>y>>m>>d;

        }
        void displayDOB(){
            cout<<y<<m<<d;
        }
     
 
    };

    private:

     int eid,salary;
    char ename[20];
      DOB bd;
};

int main(){
    Employee e;
    e.getdata();
    e.display();
}