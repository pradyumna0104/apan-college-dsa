#include <iostream>
using namespace std;
class Car{
    public:
    string name;
    string color;
    int *millage;
    Car(string name,string color){
        this->name = name;
        this->color = color;
    }
    ~Car(){
        cout<<"Destructor is called";
    }
};
int main(){
    Car c1("Maruti800","Gold");
    return 0;
}