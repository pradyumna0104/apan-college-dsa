#include <bits/stdc++.h>
using namespace std;

void PrintArray(int arr[],int n){
    cout<<"Array = ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<< ", ";
    }cout<<endl;
}
int main(){
    int arr[] = {4,5,6,9,8,7,1,2,3,3,0,0,6,6};

    sort(arr,arr+14);
    cout<<"Increasing ";
    PrintArray(arr,14);

    sort(arr,arr+14,greater<int>());
    cout<<"Decreasing ";
    PrintArray(arr,14);
    return 0;
}


/*
void PrintArray(vector<int> arr){
    for(auto i : arr){
        cout<<i<<", ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {2,3,4,9,8,7,6,5,5,1,1,0};
    cout<<"Increasing sort = ";
    sort(arr.begin(),arr.end());
    PrintArray(arr);

    cout<<"Decreasing sort = ";
    sort(arr.begin(),arr.end(),greater<int>());
    PrintArray(arr);
    return 0;
}
*/