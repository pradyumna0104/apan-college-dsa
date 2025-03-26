#include <iostream>
using namespace std;

void TransposeMatrix(int arr[][3],int n,int m){
    int ansmatrix[m][n];
    for(int i= 0;i<n;i++){
        for(int j= 0;j<m;j++){
            ansmatrix[j][i] = arr[i][j];
        }
    }
    for(int i= 0;i<m;i++){
        for(int j= 0;j<n;j++){
            cout<< ansmatrix[i][j]<<"  ";
        }
        cout<<endl;
    }
}

int main(){
    
    int mat[2][3] = {{1, 2, 3},
                     {4, 5, 6}};

    int n = sizeof(mat)/sizeof(mat[0]);
    int m = sizeof(mat[0])/sizeof(int);

    TransposeMatrix(mat,n,m);

    return 0;
}