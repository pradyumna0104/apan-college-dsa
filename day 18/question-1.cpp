// Create  a  class  to  store  Complex  numbers.  Using  operator  overloading, 
// create the logic to subtract one complex number from another.
#include <iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex(int real,int img){
        this->real = real;
        this->img = img;
    }
    void show(){
        cout<<real<<" + "<<img<<"i \n";
    }
    complex operator-(complex &c2){
        int resreal = this->real - c2.real;
        int resimg = this->img - c2.img;
        complex c3(resreal,resimg);
        return c3;
    }
};
int main(){
    complex c1(5,4);
    c1.show();
    complex c2(3,5);
    c2.show();
    complex c3 = c1-c2;
    c3.show();

    return 0;
}