/*
        Reference variable
    -------------------------
      
-> it is an alternate name (alias) of already exiting variable

    int a = 10;
    int &b = a;

-> a & b refer to same location in memory 

*/
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &b = a;
    cout<<"a = "<<a<<endl;// a = 10
    cout<<"b = "<<b<<endl;// b = 10
    cout<<"&a = "<<&a<<endl;// &a = 0x61ff08
    cout<<"&b = "<<&b<<endl;// &b = 0x61ff08
    return 0;
}