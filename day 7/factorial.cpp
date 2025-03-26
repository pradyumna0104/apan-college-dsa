#include <iostream>
using namespace std;
void factorial(int n){
    int ans=1;
    if(n>1){
        for(int i=2;i<=n;i++){
            ans*=i;
        }
    }
    cout<<"the factorial of "<<n<<" is = "<<ans;
}
int main(){
    factorial(10);
    return 0;
}