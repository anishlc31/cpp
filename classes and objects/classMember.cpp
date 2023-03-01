#include<iostream>
#include<string>

using namespace std;

class rectangle 
{
  private:
  int length,breath;
  public:
  
  void setdata(int l ,int b){
    length=l;
    breath=b;

  }

  void showdata(){
    cout<<length<<breath<<endl;
  }

  int findarea(){
    return length*breath;
  }


};

int main(){
  rectangle r;
  r.setdata(5,6);
  r.showdata();
  cout<<r.findarea();
}