#include <iostream>
using namespace std;

void ReverseArray(int arr[],int n){

    int start = 0;
    int end = n-1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void PrintArray(int arr[],int n){

    cout<<"Array = ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }

    cout<<endl;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int n= sizeof(arr) / sizeof(int);

    cout<<"Before Reverse "<<endl;
    PrintArray(arr,n);

    ReverseArray(arr,n);

    cout<<"After Reverse "<<endl;
    PrintArray(arr,n);

    return 0;
}