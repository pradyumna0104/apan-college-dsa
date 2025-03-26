#include <iostream>
using namespace std;

//stair case method
void Search_sort_mat(int arr[][4],int n,int m,int key){
    int i= 0,j=m-1;
    while(i<n && j>=0){
        if(arr[i][j] == key){
            cout<<i<<" , "<<j<<endl;
            return;
        }else if(arr[i][j] > key){
            j--;
        }else{
            i++;
        }
    }
    cout<<"Key not found .\n";
    return;
}

int main()
{
    int arr[4][4] = {{10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48},
                     {32,33,39,50}};

    Search_sort_mat(arr,4,4,50);


    return 0;
}