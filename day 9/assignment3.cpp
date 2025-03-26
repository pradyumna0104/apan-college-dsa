#include <iostream>
using namespace std;
int main(){
// imp: A->65 & a->97

    int a =32;
    int *ptr = &a;//pointer

    char ch = 'A';//ascii = 65
    char &cho = ch;//alias

    cho += a;//65 + 32 = 97(a)
    *ptr += ch;//32 + 97(a) = 129 //dereference 

    cout<<a<<" , "<<ch<<endl;//129 , a

    return 0;
}