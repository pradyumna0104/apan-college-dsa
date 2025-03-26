#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int i = n;
    while(i > 0){
        cout<<i<<" ,";
        i--;
    }
    return 0;
}