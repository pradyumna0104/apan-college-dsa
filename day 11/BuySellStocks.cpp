#include <iostream>
using namespace std;

// my technique O(n2)
int MaxProfit1(int arr[], int n)
{

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            int temp = arr[i] - arr[j];
            ans = max(ans, temp);
        }
    }
    return ans;
}

// leet code O(n)
void MaxProfit2(int arr[], int n)
{
    int BestBuy[1000];
    BestBuy[0] = INT32_MAX;
    for (int i = 1; i < n; i++)
    {
        BestBuy[i] = min(BestBuy[i - 1], arr[i - 1]);
    }

    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        maxProfit = max(maxProfit, arr[i] - BestBuy[i]);
    }
    cout << "Max profit = " << maxProfit << endl;
}
//my technique O(n)
void MaxProfit3(int arr[], int n)
{
    int mini = arr[0];
    int finalans = 0,tempans = 0;
    for(int i=1;i<n;i++){
        mini = min(mini,arr[i-1]);
        if(mini < arr[i]){
            tempans = arr[i] - mini;
            finalans = max(finalans,tempans);
        }
    }
    cout << "Max profit = " << finalans << endl;
}
int main()
{

    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(int);
    cout << MaxProfit1(arr, n) << endl;
    MaxProfit2(arr, n);
    cout<<endl;
    MaxProfit3(arr,n);
    
    int arr2[] = {7, 6, 5, 4, 3, 2};
    int n2 = sizeof(arr2) / sizeof(int);
    cout << MaxProfit1(arr2, n2) << endl;
    MaxProfit2(arr2, n2);
    cout<<endl;
    MaxProfit3(arr2, n2);

    return 0;
}