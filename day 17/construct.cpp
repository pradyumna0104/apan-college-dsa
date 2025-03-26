#include <iostream>
using namespace std;
class Car{
    string name;
    string color;
    public:
    //non-parameterized constructor
    Car(){
        cout<<"constructor without parameter\n"<<endl;
    }
    //parameterized constructor
    Car(string name,string color){
        cout<<"constructor with parameter\n"<<endl;
        this->name = name;
        this->color = color;
    }
    //getter
    string getname(){
        cout<<name<<endl;
    }
    string getcolor(){
        cout<<color<<endl;
    }
};
int main(){
    Car c2;
    Car c1("Maruti 800","Lavender");
    c1.getname();
    c1.getcolor();
    return 0;
}