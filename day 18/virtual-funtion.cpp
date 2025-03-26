#include <iostream>
#include <string>
using namespace std;
class parent{
    public:
    void show(){
        cout<<"parent class show..\n";
    }
    virtual void hello(){
        cout<<"parent hello\n";
    }
};
class child:public parent{
    public:
    void show(){
        cout<<"child class show..\n";
    }
    void hello(){
        cout<<"child hello\n";
    }
};
int main(){
    child c1;
    parent *ptr;
    ptr = &c1;//run time binding
    ptr->hello();//virtual function
                 //o/p: child hello
    return 0;
}