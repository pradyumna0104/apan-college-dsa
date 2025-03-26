#include <iostream>
#include <string>
using namespace std;

 //str.substr(starting index,length of string )//remember
    //"abcdefgh" i=2 =>     "ab"        +         "cdefgh" 
    //               => str.substr(0,i) + str.substr(i+1,str.size()-i)

void permutation(string str,string sub){
    int n = str.size();
    if(n == 0){
        cout<<"'"<<sub<<"'"<<" , ";
        return;
    }
    for(int i = 0;i<n;i++){
        char ch = str[i];
        string nextStr = str.substr(0,i) + str.substr(i+1,n-i-1);
        permutation(nextStr,sub + ch);
    }
}

int main(){
    permutation("abc","");
    return 0;
}