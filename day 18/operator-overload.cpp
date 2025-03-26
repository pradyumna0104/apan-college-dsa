#include <iostream>
#include <string>
using namespace std;
class complex{
    int real, img;
    public:
    complex(int real,int img){
        this->real = real;
        this->img = img;
    }
    void shownum(){
        cout<<real << " + "<<img<<"i "<<endl;
    }
    complex operator + (complex &c2){
        int resreal = this->real + c2.real;
        int resimg= this->img + c2.img;
        complex c3(resreal,resimg);
        return c3;
    }
};
int main(){
    complex c1(2, 3);
    complex c2(4, 5);
    c1.shownum();
    c2.shownum();
    complex c3 = c1 + c2;
    c3.shownum();
    return 0;
}