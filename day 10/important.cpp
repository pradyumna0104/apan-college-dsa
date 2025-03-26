#include <iostream>
using namespace std;
int Ghotal(int arr[]){

    cout << " INSIDE Ghotal function " << endl;

    int n = sizeof(arr) / sizeof(int);

    cout << "no of element = " << n << endl;         // 1
    cout << "size of arr = " << sizeof(arr) << endl; // 4
}

int main(){

    cout << " INSIDE main function " << endl;

    int arr[] = {6, 7, 8, 9, 1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(int);

    cout << "no of element = " << n << endl;         // 9
    cout << "size of arr = " << sizeof(arr) << endl; // 36

    Ghotal(arr); // only starting adress of the array is passed

    return 0;
}