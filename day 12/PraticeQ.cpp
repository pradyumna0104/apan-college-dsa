// sort charcter array using insertion sort in descending order
#include <iostream>
using namespace std;

void InsertionSort(char arr[],int n){
    for(int i =1;i<n;i++){
        char curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] < curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
    }

}
void PrintArray(char arr[],int n){
    cout<<"Array = ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<< ", ";
    }
    cout<<endl;
}

int main(){

    char arr[] = {'f','b','a','e','c','d'};
    int n = sizeof(arr) / sizeof(char);
    PrintArray(arr,n);
    InsertionSort(arr,n);
    PrintArray(arr,n);


    return 0;
}