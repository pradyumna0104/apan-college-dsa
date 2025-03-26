#include <iostream>
#include <string.h>
using namespace std;

bool OneSwap(char word1[], char word2[]){

    if (strlen(word1) != strlen(word2)){
        cout << "not possible\n";
        return false;
    }
    else{
        int n = strlen(word1); 
        char arr[n];
        int count = -1;
        for(int i = 0;i<n;i++){
            if(word1[i] != word2[i]){
                count++;// 0
                arr[count] = word1[i]; // 0  2
                //cout<<count<<endl;
                arr[++count] = word2[i];// 1  3
                //cout<<count<<endl;
            }
        }
        if(count > 4){
            return false;
        }else{
            if(arr[0] == arr[3] && arr[1] == arr[2]){
                return true;
            }else{
                return false;
            }
        }
    }
    return true;
}

int main(){

    char word1[] = "bank";
    char word2[] = "kanb";
    cout<<OneSwap(word1,word2)<<endl;

    char word3[] = "ambulance";
    char word4[] = "ambulacne";
    cout<<OneSwap(word3,word4)<<endl;

    return 0;
}