#include <iostream>
#include <string.h>
using namespace std;

bool Palindrome(char word[],int n){
    int s = 0,e = n-1;
    while(s<e){
        if(word[s] != word[e]){
            return false;
        }else{
            s++;e--;
        }
    }
    return true;
}
int main(){

    char word1[] = "racecar";
    int n1 = strlen(word1); 
    cout<<Palindrome(word1,n1)<<endl;
    
    char word2[] = "apple";
    int n2 = strlen(word2); 
    cout<<Palindrome(word2,n2)<<endl;

    return 0;
}