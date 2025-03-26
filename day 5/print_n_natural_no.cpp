#include <iostream>
using  namespace std;
int main(){
     int n;
     cout<<"Enter a natural number (>0) : ";
     cin>>n;
     int i = 1;
     while(i<=n){
        cout<<i<<" , ";
        i++;
     }
    return 0;
}