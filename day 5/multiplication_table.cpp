// WAP to print the multiplication table of a number, entered by the user
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a no. u want to see the multiplication table: ";
    cin>>n;
    cout<<"-------------------------------------------------\n";
    for(int i=1;i<=10;i++){
        cout<<"!\t"<<n<<"\t*\t"<<i<<"\t=\t"<<n*i<<"\t!"<<endl;
    }
    cout<<"-------------------------------------------------\n";

    return 0;
}