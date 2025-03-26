#include <iostream>
using namespace std;
int main(){
    double a, b;
    cout << "enter two number: ";
    cin >> a >> b;
    char ch;
    cout << "enter an operation (+,-,*,/) : ";
    cin >> ch;
    switch (ch){
        case '+':
            cout << a << " + " << b << " = " << (a + b) << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << (a - b) << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << (a * b) << endl;
            break;
        case '/':
            cout << a << " / " << b << " = " << (a / b) << endl;
            break;
        default:
            cout << "Invalid Opeartor." << endl;
    }
    return 0;
}