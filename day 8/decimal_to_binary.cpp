#include <iostream>
using namespace std;
void dectobin(int n){
    int ans = 0;
    int multiple = 1;//10^0 10^1 10^2...
    while(n>0){
        int rem = n % 2;
        ans += rem*multiple;
        multiple*=10;
        n/=2;
    } 
    cout<<"Binary number is : "<<ans;
}
int main(){
    int n;
    cout<<"Enter a decimal number : ";
    cin>>n;
    dectobin(n);
    return 0;
}