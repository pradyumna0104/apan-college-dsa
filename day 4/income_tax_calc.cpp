#include <iostream>
using namespace std;
int main(){
    int income;
    cout<<"enter income (in lakhs) : ";
    cin>>income;
    if(income<5){
        cout<<"No income tax below 5 lakhs. \n";
    }else if(income<10){
        cout<<"You have to pay income : "<<0.2*income<<" lakhs \n";
    }else{
        cout<<"You have to pay income : "<<0.3*income<<" lakhs \n";
    }
    return 0;
}