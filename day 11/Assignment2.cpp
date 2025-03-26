// Question  3  :  Given  an  integer  array  nums,  find  a  subarray  that  has  the  largest
// product, and return the product. The test cases are generated so that the answer will
// fit in a 32-bit integer

#include <bits/stdc++.h>
using namespace std;

int LargestSubarray(int arr[], int n){

    int maxmul = INT32_MIN;
    int mul = 1;
    for (int i = 0; i < n; i++){
        mul = mul * arr[i];
        maxmul = max(maxmul, mul);
        if (mul < 0){
            mul = 1;
        }
    }
    return maxmul;
}

int main(){

    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr) / sizeof(int);
    cout << LargestSubarray(arr, n) << endl;
    
    int arr2[] = {-2, 0, -1};
    int n2 = sizeof(arr2) / sizeof(int);
    cout << LargestSubarray(arr2, n2) << endl;

    return 0;
}
