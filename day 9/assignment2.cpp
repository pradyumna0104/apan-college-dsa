#include <iostream>
using namespace std;
void multiply(int &a,int &b,int &c){// here reference variable is used => alias
    a *= 2;
    b *= 2;
    c *= 2;
}
int main(){
    int x = 1, y = 2,z = 3;
    multiply(x,y,z);
    cout<<x<<y<<z<<endl;//246
    return 0;
}