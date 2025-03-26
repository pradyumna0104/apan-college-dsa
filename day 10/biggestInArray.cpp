#include <iostream>
using namespace std;

int biggest(int arr[], int n){

    int big = INT16_MIN;

    for (int i = 0; i < n; i++){
        if (arr[i] > big){
            big = arr[i];
        }
    }
    return big;
}

int main(){

    int arr[] = {6, 7, 8, 9, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    
    cout << "Largest = " << biggest(arr, n);
    
    return 0;
}