#include <iostream>
using namespace std;
void biggest(int a,int b,int c){
    if(a>=b && a>=c){
        cout<<a<<" is bigger.."<<endl;
    }else if(b>=a && b>=c){
        cout<<b<<" is bigger.."<<endl;
    }else{
        cout<<c<<" is bigger.."<<endl;
    }
}
int main(){
    biggest(2,3,5);
    return 0;
}