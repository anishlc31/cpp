#include<iostream>
#include<string>

using namespace std;

namespace digit{
    int count=0;
};


namespace character{
    int count=0;
};


namespace other{
    int count=0;
};

int main(){
    char str[]="1.Neapl 2.India 3.china";
    int i=0;
    while(str[i]!='\0'){
        if (isdigit(str[i])){
            digit::count++;
        }
        else if(isalpha(str[i])){
            character::count++;
        }
        else{
            other::count++;
        }
        i++;
    }
    cout<<digit::count<<endl;
        cout<<character::count<<endl;
    cout<<other::count<<endl;

}