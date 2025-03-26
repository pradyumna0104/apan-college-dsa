#include <iostream>
using namespace std;

bool CheckPowerOfTwo(int n){
    if(n & (n-1)){
        return false;
    }
        return true; 
}

int main(){
    

    int n;
    cout<<"enter a number : ";
    cin>>n;
    

    cout<<CheckPowerOfTwo(n)<<endl;
    

    
    return 0;
}