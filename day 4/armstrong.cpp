//  For any 3 digit number check whether it’s an Armstrong number or not. 
// Armstrong number is a number that is equal to the sum of cubes of its digits.
// Eg : 371 is an armstrong number. 
// 3*3*3 + 7*7*7 + 1*1*1 = 371

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a three digit number : ";
    cin>>n;
    int num = n,sto =0;
    while(n>0){
        int rem = n%10;
        sto+=(rem*rem*rem);
        n/=10;
    }
    if(num == sto){
        cout<<num<<" is a armstrong number . \n";
    }else{
        cout<<num<<" is not a armstrong number . \n";
    }
    return 0;
}