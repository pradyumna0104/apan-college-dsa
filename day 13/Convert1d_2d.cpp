#include <bits/stdc++.h>
using namespace std;

void Convert1d_to_2d(vector<int> arr, int n, int m)
{
    int size = arr.size();
    if (n * m != size)
    {
        cout<<endl;
        return;
    }
    else
    {
        int mat[n][m];
        int i = 0;
        for(int row = 0; row < n; row++){
            for(int col = 0;col < m;col++){
                mat[row][col] = arr[i];
                i++;
            }
        }
        // while (i < size)
        // {
        //     while (col <= m && i < size)
        //     {
        //         mat[row][col] = arr[i];
        //         i++;
        //         col++;
        //     }
        //     row++;
        //     col = 0;
        // }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2};
    Convert1d_to_2d(arr,1,1);

    return 0;
}