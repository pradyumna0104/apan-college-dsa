#include <iostream>
using namespace std;

void LinearSearch(int arr[],int n,int key){

    for(int i=0;i<n;i++){
        if(arr[i] == key){
            cout<<"Find the element at position = "<<i+1<<endl;
        }
    }
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n= sizeof(arr) / sizeof(int);
    int key = 6;

    LinearSearch(arr,n,key);

    return 0;
}