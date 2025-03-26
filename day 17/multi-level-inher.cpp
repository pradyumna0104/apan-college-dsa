#include <iostream>
using namespace std;
class animal{
    public:
    string color;
    void eat(){
        cout<<"eats\n";
    }
    void brathe(){
        cout<<"Brathes\n";
    }
};
class mammal:public animal{
    public:
    string bloodtype;
    mammal(){
        bloodtype = "warm";
    }
};
class dog : public mammal{
    public:
    void tail(){
        cout<<"A dog have a tail.\n";
    }
};
int main(){
    dog d1;
    d1.tail();
    d1.eat();
    d1.brathe();
    cout<<d1.bloodtype<<endl;

    return 0;  
}