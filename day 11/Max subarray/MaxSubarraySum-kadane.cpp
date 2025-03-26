#include <iostream>
using namespace std;

//using kadane's algorithm (DP)
int MaxSubarraySum(int arr[], int n){
    int maxsum = INT32_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
        maxsum = max(maxsum,sum); 
        if(sum < 0){
            sum = 0;
        }
    }
    return maxsum;
}

int main()
{

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    cout<<MaxSubarraySum(arr, n);

    return 0;
}