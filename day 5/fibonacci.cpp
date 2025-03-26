//: For a positive N , WAP that prints the first N Fibonacci numbers.(Assume N >= 2)
#include <iostream>
using namespace std;
void printfibo(int n){
    int n1 = 0,n2 = 1,count = 0;
    while(count<=n){
        cout<<n1<<", "<<n2<<", ";
        n1=n1+n2;
        n2=n1+n2;
        count++;
    }
}
int main(){
    int n;
    cout<<"Enter a positive number : ";
    cin>>n;
    if(n==0){
        cout<<"0 ,";
    }else if(n == 1){
        cout<<"0 ,1";
    }else{
        printfibo(n);
    }
    return 0;
}
