// For a positive N , WAP that prints all the prime numbers from 2 to N
#include <iostream>
using namespace std;

bool isprime(int n){
    bool ans = true; 
    for(int i=2;i<=n/2;i++){
        if(n%i == 0){
            ans = false;
            break;
        }
    }        
    return ans;
}
int main(){
    int n;
    cout<<"Enter a positive number : ";
    cin>>n;
    
    if(n==0 || n==1){
        cout<<"Enter a number greater than 2.\n";
    }else{
        cout<<"Print all prime number till "<<n<<" : ";
        for(int i=2;i<=n;i++){
            if(isprime(i)){
                cout<<i <<" ->";
            }
        }
    }

    return 0;
}