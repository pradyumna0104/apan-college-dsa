#include <iostream>
using namespace std;
int main(){
    
    int a =10;
    int *ptr = &a;
    cout<< "a = "<<a<<" , & = "<< ptr<<endl; 
    // a = 10 , & = 0x61ff04
    cout<<"size of int pointer = "<<sizeof(ptr)<<endl;
    int **pptr = &ptr;
    cout<<&ptr<< " = "<<pptr<<endl;

    float pi = 3.1415;
    float *ptr1 = &pi;
    cout<< "pi = "<<pi<<" , & = "<< ptr1<<endl; 
    // pi = 3.1415 , & = 0x61ff00
   cout<<"size of float pointer = "<<sizeof(ptr1)<<endl;

    
    return 0;
}