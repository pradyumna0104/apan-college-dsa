#include <iostream>
using namespace std;

void SelectionSort(int arr[],int n){
    for(int i =0;i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
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
    SelectionSort(arr,n);
    PrintArray(arr,n);

    int arr2[] = {1,2,3,4,5,6,7,8,9};
    int n2 =sizeof(arr2)/sizeof(int);
    PrintArray(arr2,n2);
    SelectionSort(arr2,n2);
    PrintArray(arr2,n2);

    return 0;
}