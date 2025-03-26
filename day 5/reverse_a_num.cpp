#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;
    int ans = 0,num = n;
    while(num>0){
        int rem = num % 10;
        ans = (ans * 10) + rem;
        num/=10;
    }
    cout<<"The reverse of "<<num <<" is : "<<ans<<endl;
    return 0;
}