#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    char ch;
    ifstream fin;
    fin .open ("abc.txt");
    while(!fin.eof()){
        fin.get(ch);
        cout.put('H');
    }

    fin .close();

}