//  Write a C++ program to get a number from the user and print whether 
// it's positive, negative or zero

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n>0){
        cout<<"The number is positive.\n";
    }else if(n==0){
        cout<<"The number is zero.\n";
    }else{
        cout<<"The number is Negative.\n";
    }
    return 0;
}