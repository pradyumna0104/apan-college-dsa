#include <iostream>
using namespace std;
int main(){
    int x;
    int *ptr;
    x =7;
    ptr = &x;
    cout<<*ptr<<endl;//7
    return 0;
}