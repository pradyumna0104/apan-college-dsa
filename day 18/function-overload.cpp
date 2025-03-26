#include <iostream>
#include <string>
using namespace std;
class print{
    public:
    void show(int n){
        cout<<"int : "<<n<<endl;
    }
    void show(string str){
        cout<<"string : "<<str<<endl;
    }
};
int main(){
    print obj1;
    obj1.show(25);
    obj1.show("Naman");
    return 0;
}