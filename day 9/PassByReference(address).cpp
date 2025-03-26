#include <iostream>
using namespace std;
void change(int *a){
    *a = 20;
    cout<<"Inside change function "<<endl;
    cout<<"a = "<<*a<<endl;//20
}
int main(){
    int a = 10;
    change(&a);
    cout<<"Inside main function "<<endl;
    cout<<"a = "<<a<<endl;//20
    return 0;
}