#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a natural number : ";
    cin>>n;
    int sum = 0,i=0;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"sum of natural no.s till "<<n<<" is : "<<sum<<endl;
    return 0;
}