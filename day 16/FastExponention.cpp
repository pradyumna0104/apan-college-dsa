#include <iostream>
using namespace std;

int Exponentiation(int num){
    int count = 0;
    while(num>0){
        count += num&1;
        num = num>>1;
    }
    return count;
}

int main(){

    cout<<Exponentiation(4)<<endl;
   
    return 0;
}