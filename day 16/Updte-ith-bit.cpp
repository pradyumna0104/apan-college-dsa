#include <iostream>
using namespace std;

void UpdateIthBit(int num,int i,int val){
    num &= ~(1 << i);
    num |= (val << i);
    cout<<num<<endl;
}

int main(){

    UpdateIthBit(7,2,0);
   
    return 0;
}