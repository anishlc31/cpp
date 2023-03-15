#include<iostream>

using namespace std;
class Teacher {
    int tid;
    char subject[200];
     
     public:
     void getTeacher(){
        cin >>tid;
        cin>>subject;

     }

     void displayTeacher(){

        cout<<"Teacher id:"<<tid<<endl;
        cout<<"Subject:"<<subject<<endl;


     }

};

class Staff {

    int sid;
    char level[10];
    public:
    void getstaff(){
        cin>>sid;
        cin >>level;
    }

    void displayStaff(){
        cout <<"Staff id:"<<sid<<endl;
        cout<<"Level:"<<level<<endl;
    }

};

class coordinator : public Teacher , public Staff {

char program[10];
public:
void getdata(){
    getTeacher();
    getstaff();
    cin>>program;
}

void displaydata()
{
    displayTeacher();
    displayStaff();
    cout<<program;
}

};

int main()
{
    coordinator c;
    c.getdata();
    c.displaydata();

}