#include <iostream>
using namespace std;

void UpdateIthBit(int num,int i){
    int mask =  (~0)<<i;

    cout<<(num&mask)<<endl;
}

int main(){

    UpdateIthBit(15,2);
   
    return 0;
}