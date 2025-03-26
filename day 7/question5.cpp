#include <iostream>
using namespace std;
void beforeCH(char ch){
    if (ch == 'z'){
        cout << "a";
    }
    else{
        ++ch;
        cout << ch;
    }
}
int main(){
    beforeCH('c');
    beforeCH('z');
    return 0;
}