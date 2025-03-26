#include <iostream>
#include <string>
using namespace std;

void subset(string str,string sub){
    if(str.size() == 0){
        cout<<"'"<<sub<<"'"<<" , ";
        return;
    }
    char ch = str[0];
    subset(str.substr(1,str.size()-1),sub+ch);//yes choice
    subset(str.substr(1,str.size()-1),sub);//no choice
}

int main(){
    subset("abc","");
    return 0;
}