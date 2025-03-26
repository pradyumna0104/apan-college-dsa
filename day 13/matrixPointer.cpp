#include <iostream>
using namespace std;

int main(){
    
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    // starting address of 1st row
    cout << mat << endl; // 0x61fed0

    // starting address of 2nd row (not 2nd element) <- remind
    cout << mat + 1 << endl; // 0x61fee0

    cout << mat << " = " << &mat[0][0] << endl;
    cout << mat + 1 << " != " << &mat[0][1] << endl;
    cout << mat + 1 << " = " << &mat[1][0] << endl;

    return 0;
}