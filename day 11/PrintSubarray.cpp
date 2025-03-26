#include <iostream>
using namespace std;

void PrintSubarray(int arr[], int n){
    for (int s = 0; s < n; s++){
        for(int e = s; e < n; e++){
            for (int i = s; i <= e; i++){
                cout << arr[i] << ", ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    PrintSubarray(arr, n);

    return 0;
}