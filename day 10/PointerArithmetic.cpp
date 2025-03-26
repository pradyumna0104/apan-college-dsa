#include <iostream>
using namespace std;

void PrintArray(int *ptr,int n){
    cout<<"Array = ";
    for(int i=0;i<n;i++){
        cout<<*ptr<<", ";
        ptr += 1;
    }
    cout<<endl;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int n= sizeof(arr) / sizeof(int);
    PrintArray(arr,n);

    // int a = 5;
    // int *ptr = &a;
    // cout<<ptr<<endl;
    // ptr ++;
    // cout<<ptr<<endl;
    // ptr --;
    // cout<<ptr<<endl;
    // ptr += 8;
    // cout<<ptr<<endl;

    return 0;
}