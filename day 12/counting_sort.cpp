#include <iostream>
using namespace std;

void CountingSort(int arr[],int n){

    int freqArr[1000] = {0};
    int minval = INT32_MAX,maxval = INT32_MIN;
    
    for(int i =0;i<n;i++){
        minval = min(minval,arr[i]);
        maxval = max(maxval,arr[i]);
    }

    //1st step
    for(int i=0;i<n;i++){
        freqArr[arr[i]]++;
    }

    //2nd step
    for(int i=minval,j=0;i<=maxval;i++){
        while(freqArr[i] > 0){
            arr[j++] = i;
            freqArr[i]--;
        }
    }
}

void PrintArray(int arr[],int n){
    cout<<"Array = ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<< ", ";
    }cout<<endl;
}

int main(){

    int arr[] = {1,7,6,1,2,3,4,8,0,5};
    int n = sizeof(arr) / sizeof(int);
    PrintArray(arr,n);
    CountingSort(arr,n);
    PrintArray(arr,n);

    int arr2[] = {1,2,3,4,5,5,7,8,0};
    int n2 =sizeof(arr2)/sizeof(int);
    PrintArray(arr2,n2);
    CountingSort(arr2,n2);
    PrintArray(arr2,n2);

    return 0;
}