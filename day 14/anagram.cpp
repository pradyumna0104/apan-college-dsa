#include <iostream>
#include <string.h>
using namespace std;

void Anagram(char word1[], char word2[]){

    int arr[26] = {0};

    if (strlen(word1) != strlen(word2)){
        cout << "not valid anagrams\n";
        return;
    }
    else
    {
        int n = strlen(word1);
        for (int i = 0; i < n; i++){
            int pos = word1[i] - 'a';
            arr[pos]++;
        }
        for (int i = 0; i < n; i++){
            int pos = word2[i] - 'a';
            if (arr[pos] == 0){
                cout << "not valid anagrams\n";
                return;
            }
            else{
                arr[pos]--;
            }
        }
    }
    cout<<"valid Anagrams\n";
    return;
}

int main(){

    char word1[] = "racecar";
    char word2[] = "carrace";
    Anagram(word1, word2);

    return 0;
}