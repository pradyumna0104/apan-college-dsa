#include <iostream>
using namespace std;
int main(){
    int n;
    // do{
    //     cout<<"Enter  a number : ";
    //     cin>>n;
    //     if(n % 10 == 0){
    //         cout<<"You got it..";
    //         break;
    //     }
    //     cout<<" your number is : "<<n<<endl;
    // }while(true);
    while(true){
        cout<<"Enter a number : ";
        cin>>n;
        if(n % 10 == 0){
            cout<<"You got it..";
            break;
        }
        cout<<"you entered : "<<n<<endl;
    }
    return 0;
}