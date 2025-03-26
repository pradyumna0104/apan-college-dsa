#include <iostream>
using namespace std;

int main(){

    int arr[] = {6,7,8,9,1,2,3,4,5};
    // in cpp arr name -> pointer
    cout<<arr<<endl;//address print
    cout<<*arr<<endl;//6   := arr[0] value print
    cout<<*(arr+1)<<endl;//7    : = arr[1] value print 
    cout<<*(arr+2)<<endl;//8    : = arr[2] value print

    return 0;
}