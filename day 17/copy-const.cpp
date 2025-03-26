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
        millage = new int;//dynamically allocation
        *millage = 12;
    }
    Car(Car &original){
        cout<<"copying original to new..\n";
        name = original.name;
        color = original.color;
        // millage = original.millage;//shalow copy//10
        millage = new int;
        *millage = *original.millage;   //12 
    }
};
int main(){
    Car c1("Maruti800","Gold");
    Car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.millage<<endl;
    *c2.millage = 10;
    cout<< *c1.millage<<endl;
    //here c1 and c2 are referenceing the same loaction (millage) i.e. shallow copy
    //if we need deep copy then we use this our custom constructor
    return 0;
}