#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int num =n;
    while(num>0){
        int rem = num%10;
        cout<<rem<<" , ";
        num/=10;
    }
}