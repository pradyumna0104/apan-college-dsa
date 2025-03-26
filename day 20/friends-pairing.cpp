//Find total ways in which n friends can be paired up.
//Each friend only be paired once.
#include <iostream>
using namespace std;
/*
//using basic approach
int fact(int n){
    int ans = 1;
    for(int i = 1;i<=n;i++){
        ans *= i;
    }
    return ans;
}
int UsingPandC(int n){
    if(n == 1){
        return 1;
    }
    return fact(n)/(fact(n-2)*2) + 1 ;
}
*/
int findPairRec(int n){
    if(n == 1 || n ==2){
        return n;
    }
    //     single                  pair           
    return findPairRec(n-1) + (findPairRec(n-2) * (n-1));
}

int main(){
    // cout<<UsingPandC(2);
    cout<<findPairRec(3);
    return 0;
}