#include <iostream>
using namespace std;

void TrappingRainwater(int arr[], int n){

    int leftmax[n], rightmax[n], ansarray[n];
    leftmax[0] = arr[0];
    rightmax[n - 1] = arr[n - 1];

    //leftmax array
    for (int i = 1; i < n; i++){
        leftmax[i] = max(leftmax[i - 1], arr[i - 1]);
    }

    //rightmax array
    for (int i = n - 2; i >= 0; i--){
        rightmax[i] = max(rightmax[i + 1], arr[i + 1]);
    }

    //answer array
    for (int i = 0; i < n; i++){
        if ((min(leftmax[i], rightmax[i]) - arr[i]) > 0){
            ansarray[i] = min(leftmax[i], rightmax[i]) - arr[i];
        }
        else{
            ansarray[i] = 0;
        }
    }

    //calculating total
    int total = 0;
    for (int i = 1; i < (n - 1); i++){
        total += ansarray[i];
    }
    cout << "Total Rainwater = " << total << endl;
}

int main(){

    int arr[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(arr) / sizeof(int);
    TrappingRainwater(arr, n);

    int arr2[] = {3, 2, 1, 1, 1, 2, 3};
    int n2 = sizeof(arr2) / sizeof(int);
    TrappingRainwater(arr2, n2);

    int arr3[] = {5, 4, 3, 2, 1};
    int n3 = sizeof(arr3) / sizeof(int);
    TrappingRainwater(arr3, n3);

    int arr4[] = {5, 4};
    int n4 = sizeof(arr4) / sizeof(int);
    TrappingRainwater(arr4, n4);

    return 0;
}