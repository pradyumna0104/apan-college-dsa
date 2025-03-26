#include <iostream>
using namespace std;
bool pallindrome(int n){
    int actual = n;
    int reverse = 0;
    while(n>0){
        int last=n%10;
        reverse = reverse*10 + last;
        n/=10;
    }
    return (reverse==actual);
}
int main(){
    cout<<pallindrome(121)<<endl;
    cout<<pallindrome(321)<<endl;
    return 0;
}
