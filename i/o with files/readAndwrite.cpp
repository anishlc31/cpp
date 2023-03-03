#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class student {
     int roll; 
      char name[30];
      char address[60];
      public:
      void readData();
      void writeData();
};

void student :: readData()
{
   cout<<"Enter roll";
   cin >>roll;
   cout<<"name";
   cin>>name;
   cout<<"adress";
   cin>>address;
}

void student :: writeData()
{
    cout<<roll;
    cout<<name;
    cout <<address;
}

int main()
{
    student s;
    int i ; 
    ofstream fout;
    fout . open("abc.txt");
    for(i=0;i<2;i++){
 s.readData();
 fout.write((char*)&s,sizeof(student));
    }

    fout.close();
    cout<<"write completed";
}