#include <iostream>
using namespace std;

void DiagonalSum(int arr[][4],int x){
    int n =x,m=x;

    if(n != m){
        cout<<"can't possible to claculate diagonal .";
        return;
    }

    int sum = 0;
    
    //primary digonal sum
    int i = 0,j =0;
    while (i<n && j<m)
    {
        sum += arr[i][j];
        i++;j++;
    }

    //secondary diagonal sum
    i = 0;j = m-1;
    while(i < n && j>=0){
        if(i != j){
            sum += arr[i][j];
            i++;j--;
        }
    }
    
    cout<<"diagonal sum = "<<sum<<endl;
}

void DiagonalSumOptimize(int arr[][4],int n){
    int sum = 0;
    for(int i =0;i < n;i++){
        sum += arr[i][i];//Primary diagonal
        if(i != n-i-1){//avoid middle in odd matrix
            sum += arr[i][n-i-1];//secondary diagonal
        }
    }
    cout<<"diagonal sum = "<<sum<<endl;
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};


    DiagonalSum(arr,4);
    DiagonalSumOptimize(arr,4);

    // int arr2[3][3] = {{1, 2, 3},
    //                  {4, 5, 6},
    //                  {7, 8, 9}};


    // DiagonalSum(arr2,3);

    return 0;
}