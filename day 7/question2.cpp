#include <iostream>
using namespace std;
void sum_of_digit(int n){
    int actual = n;
    int sum =0;
    while(n>0){
        int last=n%10;
        sum += last;
        n/=10;
    }
    cout<<"sum of all digits of "<<actual<<" is : "<<sum<<endl;
}
int main(){
    sum_of_digit(121);
    sum_of_digit(321);
    return 0;
}
