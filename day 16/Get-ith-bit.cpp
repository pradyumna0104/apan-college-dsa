#include <iostream>
using namespace std;

int main(){
    //index count from 0th index

    int n;
    cout<<"enter a number : ";
    cin>>n;
    int i;
    cout<<"enter the i value : ";
    cin>>i;

    int mask = 1<<i;
    if(n&mask){
        cout<<"!! ans = 1 !!"<<endl;
    }else{
        cout<<"!! ans = 0 !!"<<endl;
    }

    //  or


    n = (n>>i);
    cout<<n<<endl;
    if(n&1){
        cout<<"!! ans = 1 !!"<<endl;
    }else{
        cout<<"!! ans = 0 !!"<<endl;
    }
    
    return 0;
}