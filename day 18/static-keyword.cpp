#include <iostream>
using namespace std;
void noramlcount(){
    int normalcnt = 0;
    normalcnt++;
    cout<<"normal count : "<<normalcnt<<endl;
}

void staticcount(){
    static int staticcnt = 0;
    staticcnt++;
    cout<<"static count : "<<staticcnt<<endl;
}

class Example{
    public:
    static int x;
};
int Example::x = 0;

int main(){
    noramlcount();//normal count : 1
    noramlcount();//normal count : 1
    noramlcount();//normal count : 1

    staticcount();//static count : 1
    staticcount();//static count : 2
    staticcount();//static count : 3

    Example eg1;
    Example eg2;
    Example eg3;
    cout<<eg1.x++<<endl;//0
    cout<<eg2.x++<<endl;//1
    cout<<eg3.x++<<endl;//2
    
    return 0;
}