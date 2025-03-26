#include <iostream>
using namespace std;

//generally if we use loop it takes O(n) times 
//if we use recursion it takes Log(n) times
//------------------------------------------------------------------------
//this is a inefficient approach
// int power(int x,int n){//X^n
//     //base case
//     if(n==0)
//         return 1;
//     if(n%2 != 0)//n == odd
//         return x * power(x,n/2) * power(x,n/2); 
//     else//n == even
//         return power(x,n/2) * power(x,n/2); 
// }
//------------------------------------------------------------------------
//efficient approach
int power(int x,int n){//X^n
    if(n==0) return 1;
    int half = power(x,n/2);
    int halfSquare = half*half;
    if(n%2!=0) return x*halfSquare;//odd case
    return halfSquare;//even case
}

int main(){
    cout<<power(2,10)<<endl;
    cout<<power(2,9)<<endl;
    return 0;
}