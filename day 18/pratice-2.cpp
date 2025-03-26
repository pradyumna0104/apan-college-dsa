#include <iostream>
using namespace std;
class base{
public:
    virtual void print(){
        cout<<"Base \n";
    }
};
class derived:public base{
    public:
    void print() override{
        cout<<"Derived \n";
    }
};
int main(){
    base *b = new derived();
    b->print();
    delete b;
    return 0;
}