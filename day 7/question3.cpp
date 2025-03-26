#include <iostream>
using namespace std;
int square(int a,int b){
    return (a*a)+(b*b)+(2*a*b);
}
int main(){
    cout<<square(10,5);
    return 0;
}