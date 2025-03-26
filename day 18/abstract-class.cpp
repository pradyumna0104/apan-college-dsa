#include <iostream>
#include <string>
using namespace std;
//abstract class 
class shape{
    public:
    virtual void show() = 0;//abstract function or pure virual function
};
class circle:public shape{
    public:
    void show(){
        cout<<"draw circle.\n";
    }
};
class square:public shape{
    public:
    void show(){
        cout<<"draw square.\n";
    }
};
int main(){
    //shape sp1;
    //not possible for creating a object if a class contain pure virtual function
    circle c1;
    c1.show();
    square s1;
    s1.show();
    return 0;
}