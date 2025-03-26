#include <iostream>
using namespace std;

int FastExponentiation(int x, int n)
{ // X^n
    int ans = 1;
    while (n > 0)
    {
        int lastbit = n & 1;
        if (lastbit == 1)
            ans = ans * x;
        x = x * x;  // x^0 x^1 x^2 x^3 x^4 ....
        n = n >> 1; // bit decrease by 1 size
    }
    return ans;
}

int main()
{

    cout << FastExponentiation(2, 10) << endl;

    return 0;
}



