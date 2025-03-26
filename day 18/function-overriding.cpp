#include <iostream>
#include <string>
using namespace std;
class parent{
    public:
    void show(){
        cout<<"parent class show..\n";
    }
};
class child:public parent{
    public:
    void show(){
        cout<<"child class show..\n";
    }
};
int main(){
    child c1;
    c1.show();//child class show..
    return 0;
}