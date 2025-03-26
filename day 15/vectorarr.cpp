#include <iostream>
using namespace std;

int main(){

    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int *arr = new int[size];

    int val = 0;
    for (int i = 0; i < size; i++){
        arr[i] = val;
        cout<<arr[i]<< " ";
        val++;
    }

    return 0;
}