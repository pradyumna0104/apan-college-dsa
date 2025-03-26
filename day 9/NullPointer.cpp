#include <iostream>
using namespace std;
int main(){

    int *ptr = NULL;
    cout << ptr << endl; // 0
    cout << *ptr <<endl; //segmentation fault

    return 0;
}