#include <iostream>
using namespace std;

int MaxSubarraySum(int arr[], int n){
    int max = INT32_MIN;
    for (int s = 0; s < n; s++){
        for(int e = s; e < n; e++){
            int sum = 0;
            for (int i = s; i <= e; i++){
                sum = sum + arr[i];
            }
            if(sum > max){
                max = sum;
            }
        }
    }
    return max;
}

int main()
{

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    cout<<MaxSubarraySum(arr, n);

    return 0;
}