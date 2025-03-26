#include <iostream>
#include <string.h>
using namespace std;

int main(){

    // char word1[15] = "Hello";
    // char word2[15] = "World";

    char word1[15] ;
    char word2[15] ;
    strcpy(word1,"Hello dost!");
    strcpy(word2,"It's me");
    
    //strcpy(word1,word2);
    
    strcat(word1,word2);
    cout<<word1<<endl;

    cout<<strcmp(word1,word2);

    return 0;
}