#include <iostream>
using namespace std;

void BubbleSort(int arr[],int n){
    bool isSwap = false;
    for(int i =0;i<n;i++){
        for(int j = 1;j<n-i;j++){
            if(arr[j] < arr[j-1]){
                swap(arr[j],arr[j-1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }

}
void PrintArray(int arr[],int n){
    cout<<"Array = ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<< ", ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {9,7,6,1,2,3,4,8,0,5};
    int n = sizeof(arr) / sizeof(int);
    PrintArray(arr,n);
    BubbleSort(arr,n);
    PrintArray(arr,n);

    int arr2[] = {1,2,3,4,5,6,7,8,9};
    int n2 =sizeof(arr2)/sizeof(int);
    PrintArray(arr2,n2);
    BubbleSort(arr2,n2);
    PrintArray(arr2,n2);

    return 0;
}