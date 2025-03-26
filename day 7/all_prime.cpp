#include <iostream>
using namespace std;
bool fact(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void allprime(int n){
    cout<<"Print all prime till "<<n<<" is : ";
    for(int i=1;i<=n;i++){
        if(fact(i)){
            cout<<i<<", ";
        }
    }
}
int main(){
    allprime(100);
    return 0;
}