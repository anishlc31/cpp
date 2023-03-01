#include<iostream>
#include<string>

using namespace std;


class Employee 
{
    int salary;
    int id ; 
    public:

    void getdata(){
        cin>>id;
        cin>>salary;
    }
    
    void putdata(){
        cout <<"id:"<<id<<"\tsalary:"<<salary<<endl;
    }
   

};

int main()
{
    Employee e[100];
    int n =0;
    char ans;
    do{
        cout<<"Enter the Employee number ::"<<n+1<<endl;
        e[n++].getdata();
        cout<<"Enter another(y/n)";
        cin>>ans;
    }while(ans!='n');
    cout <<endl<<"Emplotee details"<<endl;
    for(int j=0;j<n;j++){
        cout<<"\nEmployee number"<<j+1<<"\t";
        e[j].putdata();
    }

}