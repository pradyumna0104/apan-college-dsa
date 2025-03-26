#include <iostream>
#include <vector>
using namespace std;
void decreaseprint(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    return decreaseprint(n-1);
}
int sumTillN(int n){
    if(n == 0)
        return 0; 
    else
        return n + sumTillN(n-1);
}
int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
bool checksorted(vector<int> arr,int n,int i){
    if(i == n-1)
        return true;
    if(arr[i] > arr[i+1])
        return false;
    return checksorted(arr,n,i+1);
}
int firstoccur(vector<int> &arr,int i,int target){
    if(i == arr.size())
        return false;
    if(arr[i] == target)
        return i;
    firstoccur(arr,i+1,target);
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    cout<<firstoccur(arr,0,4);
    return 0;
}