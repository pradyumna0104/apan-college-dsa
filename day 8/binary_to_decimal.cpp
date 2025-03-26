#include <iostream>
// #include <math.h>
using namespace std;
// void bintodec(int n){
//     int ans = 0;
//     int power = 0;
//     while(n > 0){
//         int rem = n % 10;
//         ans += (rem*pow(2,power));
//         power++;
//         n/=10;
//     }
//     cout<<"Decimal number is : "<<ans;
// }
void bintodec(int n){
    int ans = 0;
    int power = 1;//2^0 2^1 2^2 ... 
    while(n > 0){
        int rem = n % 10;
        ans += rem*power;
        power*=2;
        n/=10;
    }
    cout<<"Decimal number is : "<<ans;
}
int main(){
    int n;
    cout<<"Enter a binary number : ";
    cin>>n;
    bintodec(n);
    return 0;
}