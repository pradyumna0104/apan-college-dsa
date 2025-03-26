//implict typecasting

//bool -> char -> int -> float -> double
// #include <iostream>
// using namespace std;
// int  main(){

//     cout<<(10/3)<<endl;//3
//     cout<<(10/3.0)<<endl;//3.33333
//     cout<<('A'+1)<<endl;//66

//     return 0;
// }



//explict typecasting
#include <iostream>
using namespace std;
int  main(){

    float pi=3.14;
    cout<<(int)(pi)<<endl;//3
    cout<<((float)10/3)<<endl;//3.33333
    cout<<(char)('A'+3)<<endl;//D

    return 0;
}
