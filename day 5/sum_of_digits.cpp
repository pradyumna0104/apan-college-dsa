#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum =0,num=n;
    while(num>0){
        int last = num % 10;
        sum+=last;
        num/=10;
    }
    cout<<"sum of digits of no. "<<n<<" is : "<<sum<<endl;
    return 0;
}