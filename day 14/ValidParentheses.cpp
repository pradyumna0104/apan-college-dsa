#include <iostream>
#include <string.h>
using namespace std;

bool Valid_Paren(char word[]){

    int n = strlen(word);
    int round = 0,square = 0,curl = 0;
    for(int i = 0;i<n;i++){
        if(word[i] == '('){
            round++;
        }else if(word[i] == '['){
            square++;
        }else if(word[i] == '{'){
            curl++;
        }else if(word[i] == ')' && round != 0){
            round--;
        }else if(word[i] == ']' && square != 0){
            square--;
        }else if(word[i] == '}' && curl != 0){
            curl--;
        }else{
            return false;
        }
    }
    if(round == 0 && square == 0 && curl == 0){
        return true;
    }else{
        return false;
    }

}

int main(){

    char word1[] = "()";
    char word2[] = "()[]{}";
    char word3[] = ")]}";
    char word4[] = "()[{";
    cout<<Valid_Paren(word1)<<endl;
    cout<<Valid_Paren(word2)<<endl;
    cout<<Valid_Paren(word3)<<endl;
    cout<<Valid_Paren(word4)<<endl;

    return 0;
}