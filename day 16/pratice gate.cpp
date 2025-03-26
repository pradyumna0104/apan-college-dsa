#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr = {1,2,15,14,6,7,8,9,3,5};
    int maxi = -1;
    for(int i = arr.size();i>0;i--){
        maxi=max(maxi,arr[i]);
        if(arr[i]>maxi){
            cout<<arr[i]<<" - ";
        }
    }

    return 0;
}