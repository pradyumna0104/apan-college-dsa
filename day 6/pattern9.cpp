#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        for(int l = 1;l<=i-1;l++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        for(int k=1;k<=n-i+1;k++){
            cout<<"* ";
        }
        for(int l = 1;l<=n-i;l++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}