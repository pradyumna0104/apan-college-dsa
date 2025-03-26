#include <iostream>
using namespace std;
int main(){

    int a = 10;
    int *ptr = &a;

    cout<<"a = "<<a<<endl;//value
    cout<<"*ptr = "<<*ptr<<endl;//value
    cout<<"*(&a) = "<<*(&a)<<endl;//value 

    cout<<"&a = "<<&a<<endl;//address of value 
    cout<<"ptr = "<<ptr<<endl;//address of value

    cout<<"&ptr = "<<&ptr<<endl;//address of pointer


    *ptr = 20;//dereference
    cout<<"a = "<<a<<endl; 
    return 0;
}
/*
    a = 10
    *ptr = 10
    *(&a) = 10
    &a = 0x61ff0c
    ptr = 0x61ff0c
    &ptr = 0x61ff08

    a = 20
*/