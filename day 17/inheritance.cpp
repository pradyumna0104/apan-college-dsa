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
class fish : public animal{
    public:
    int fins;
    void swim(){
        cout<<"swims\n";
    }
};
int main(){
    fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;
    f1.swim();
    f1.eat();
    f1.brathe();
    f1.color = "gold";
    cout<<f1.color<<endl;
    return 0;  
}