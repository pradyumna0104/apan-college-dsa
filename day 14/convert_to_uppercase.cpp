#include <iostream>
#include <string.h>
using namespace std;

void ConvertToUpperCase(char word[]){
    for(int i = 0;word[i] != '\0' ;i++){
        if( word[i] <= 'z' && word[i] >= 'a'){
            word[i] -= 32;
        }
    }
}

int main(){

    //'A' = 65  'a' = 97
    char word[] = "Elephant";
    ConvertToUpperCase(word);
    cout<<word<<endl;

    return 0;
}
