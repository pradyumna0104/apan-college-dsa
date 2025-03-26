#include <iostream>
#include <string.h>
using namespace std;

int main(){

    string str;
    // getline(cin,str);
    getline(cin,str,'$');
    cout<<str<<endl;
    cout<<str[0]<<endl;
    cout<<str[1]<<endl;

    return 0;
}