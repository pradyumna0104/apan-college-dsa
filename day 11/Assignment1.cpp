// Question 1 : Given an integer array nums, return true if any value appears at least
//  twice in the array, and return false if every element is distinct

#include <bits/stdc++.h>
using namespace std;

bool checkTwice(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] == arr[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 3, 4, 4, 2};
    cout << checkTwice(arr);
    return 0;
}
