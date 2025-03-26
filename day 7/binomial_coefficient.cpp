#include <iostream>
using namespace std;
int fact(int n){
    if(n<=1){
        return 1;
    }
    int ans=1;
    for(int i=2;i<=n;i++){
        ans*=i;
    }
    return ans;
}
int main(){
    int n,r;
    cout<<"Enter the value of n,r: ";
    cin>>n>>r;
    cout<<(fact(n)/(fact(r)*fact(n-r)));
    return 0;
}