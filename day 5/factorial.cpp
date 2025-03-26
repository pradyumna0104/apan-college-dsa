// WAP to find the Factorial of a number entered by the user.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. u want to find factorial: ";
    cin>>n;
    long ans = 1;
    for(int i =1;i<=n;i++){
        ans*=i;
    }
    cout<<"Factorial of "<<n<<" is: "<<ans<<endl;
    return 0;
}