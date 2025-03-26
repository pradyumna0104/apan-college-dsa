#include <iostream>
#include <string.h>
using namespace std;

void ReverseCharArr(char word[],int n){
    int s = 0,e = n-1;
    while(s<e){
        swap(word[s],word[e]);
        s++;e--;
    }
}
int main(){

    char word[] = "Elephant";
    int n = strlen(word); 
    ReverseCharArr(word,n);
    cout<<word<<endl;

    return 0;
}