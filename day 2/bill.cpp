/*
: Enter cost of 3 items from the user (using float data type) - a pencil, a
pen and an eraser. You have to output the total cost of the items back to the user as
their bill.
(Add on : You can also try adding 18% GST tax to the items in the bill as an advanced
problem)
*/
#include <iostream>
using namespace std;
int main(){
    float pencil,pen,eraser,total;
    cin>>pencil>>pen>>eraser;
    total = (pencil*1.18)+(pen*1.18)+(eraser*1.18);
    cout<<"Toatl cost : "<<total;
    return 0;
}