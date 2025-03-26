#include <iostream>
using namespace std;

void inputArray(int arr[][3],int n,int m){
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<"enter the arr["<<i<<"]["<<j<<"] th element = "<<endl;
            cin>>arr[i][j];
        }
    }
}

void OutputArray(int arr[][3],int n,int m){
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[2][3];

    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr[0])/sizeof(int);

    inputArray(arr,n,m);

    OutputArray(arr,n,m);
    return 0;
}