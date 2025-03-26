#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int sum = 0,num = n;
    while(num > 0){
        int rem = num % 10;
        if(rem%2 != 0){
            sum += rem;
        }
        num/=10;
    }
    cout<<"sum of odd digits of the no. "<<n<<" is : "<<sum<<endl;
    return 0;

}