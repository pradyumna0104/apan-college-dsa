#include <iostream>
using namespace std;

class Example{
public:
    Example(){
        cout << "Constructor..\n";
    }
    ~Example(){
        cout << "Destructor..\n";
    }
};

int main(){

    int a = 0;
    /*
    if(a == 0){
        Example eg1;//Constructor.. Destructor.. code ending..
    }
    */
    if (a == 0){
        static Example eg1; // Constructor.. code ending.. Destructor..
    }

    cout << "code ending..\n";
    return 0;
}