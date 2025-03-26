//only count total possible ways
// #include <iostream>
// using namespace std;
// int grid(int r,int c,int n,int m){
//     if(r == n-1 && c == m-1){//base case for destination
//         return 1;
//     }
//     if(r >= n || c >= m){
//         return 0;
//     }
//     //forward move (right moove)
//     int v1 = grid(r,c+1,n,m);
//     //downward move (down move)
//     int v2 = grid(r+1,c,n,m);
//     return v1 + v2;
// }

// int main() {
//     int n = 3,m=3;
//     cout << grid(0,0,n,m);

//     return 0;
// }

//--------------------------------------------------------------------------------

//count and print all possible ways
#include <iostream>
using namespace std;
int grid(int r,int c,int n,int m,string ans){
    if(r == n-1 && c == m-1){//base case for destination
        cout<<ans<<endl;
        return 1;
    }
    if(r >= n || c >= m){
        return 0;
    }
    //forward move (right moove)
    int v1 = grid(r,c+1,n,m,ans+'R');
    //downward move (down move)
    int v2 = grid(r+1,c,n,m,ans+'D');
    return v1 + v2;
}

int main() {
    int n = 3,m=3;
    string ans = "";
    cout << grid(0,0,n,m,ans);

    return 0;
}