#include <iostream>
using namespace std;


int main(){

    int arr[] = {2,4,6,8,10,12,14,16};

    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;
    
    cout<<ptr1<<" = "<<*ptr1<<endl;//0x61fee8 = 2
    cout<<ptr2<<" = "<<*ptr2<<endl;//0x61fef4 = 8
    
    cout<<*ptr2 - *ptr1<<endl;//8-2 = 6
    cout<<ptr2 - ptr1<<endl;//3 (how many element's are stored)

    cout<<(ptr2 > ptr1)<<endl;//true = 1
    cout<<(ptr2 < ptr1)<<endl;//false =  0

    return 0;
}