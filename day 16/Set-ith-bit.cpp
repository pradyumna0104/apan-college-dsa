#include <iostream>
using namespace std;

int main(){
    
    //set = (0 -> 1) and (1 -> 1)

    int n;
    cout<<"enter a number : ";
    cin>>n;
    int i;
    cout<<"enter the i value : ";
    cin>>i;

    int mask = 1<<i;

    n |= mask;
    

    cout<<n<<endl;
    

    
    return 0;
}