#include <iostream>
using namespace std;

void TransposeMatrix(int arr[][4], int n)
{
    int ansmatrix[n][n];
    for (int orow = 0,rcol = n-1; orow < n,rcol>=0; orow++,rcol--)
    {
        for (int ocol = 0,rrow=0 ; ocol < n,rrow<n; ocol++,rrow++)
        {
            ansmatrix[rrow][rcol] = arr[orow][ocol];
        }
    }

    for(int i= 0;i<n;i++){
        for(int j= 0;j<n;j++){
            cout<< ansmatrix[i][j]<<"  ";
        }
        cout<<endl;
    }
}

int main()
{

    // int mat[3][3] = {{1, 2, 3},
    //                  {4, 5, 6},
    //                  {7, 8, 9}};
    // int n = sizeof(mat)/sizeof(mat[0]);

    // TransposeMatrix(mat, n);


    int mat2[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    int n2 = sizeof(mat2)/sizeof(mat2[0]);
    TransposeMatrix(mat2, n2);

    return 0;
}