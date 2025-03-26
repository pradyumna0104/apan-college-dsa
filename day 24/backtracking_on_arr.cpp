#include <iostream>
using namespace std;

void printarr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void changearr(int arr[], int n, int i) {
    if(i == n) {
        printarr(arr, n);  // Print when reaching base case
        return;
    }
    
    arr[i] = i + 1;  // Assign forward
    changearr(arr, n, i + 1);  // Recursive call

    arr[i] -= 2;  // Modify while backtracking
}

int main() {
    int arr[5] = {0};
    changearr(arr, 5, 0);
    printarr(arr, 5);  // Print final backtracked array
    return 0;
}
