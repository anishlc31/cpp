#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin;
    char str[80];
    fin.open("abc.txt");
    fin.getline(str,79);
    cout<<"\n Form file:"<<str;
}