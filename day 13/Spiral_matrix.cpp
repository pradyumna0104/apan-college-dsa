#include <iostream>
using namespace std;

void SpiralMatrix(int arr[][4],int n,int m){
    int srow = 0;
    int scol = 0;
    int erow = n - 1;
    int ecol = m - 1;

    while (srow <= erow && scol <= ecol){
        // top print
        for (int i = scol; i <= ecol; i++){
            cout << arr[srow][i] << " ";
        }
        srow++;

        // right print
        for (int i = srow; i <= erow; i++){
            cout << arr[i][ecol] << " ";
        }
        ecol--;

        // bottom print
        for (int i = ecol; i >= scol; i--){
            cout << arr[erow][i] << " ";
        }
        erow--;

        // left print
        for (int i = erow; i >= srow; i--){
            cout << arr[i][scol] << " ";
        }
        scol++;
    }
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};


    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr[0]) / sizeof(int);

    SpiralMatrix(arr,n,m);

    return 0;
}