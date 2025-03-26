/*
Question 2 : 
Keypad Combinations 
Given  a  string  containing  digits  from  2-9  inclusive, print all possible letter combinations that 
the number could represent. You can print the answer in any order. 
 
A  mapping  of  digits  to letters (just like on the telephone buttons) is given below. Note that 1 
does not map to any letters. 
 
 
 
Sample Input 1 : digits = "23" 
Sample Output 1 : "ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf" 
 
Sample Input 2 : digits = "2" 
Sample Output 2 : "a", "b", "c" 
 
Sample Input 3 : digits = "" 
Sample Output 3 : ””
*/


#include <iostream>
#include <vector>
#include <string>
using namespace std;

void bfs(int pos,int len,string input,string ans,vector<vector<char>> l){
    //base case
    if(pos == len){
        cout<<ans<<" , ";
        return;
    }
    //find the digits and corresponding letters
    vector<char> letters = l[input[pos] - '0'];
    int n = letters.size();
    for(int i=0;i<n;i++){
        bfs(pos+1,len,input,ans+letters[i],l);
    }
}

void keypadCombination(string input,vector<vector<char>> l){
    //base case
    int n = input.length();
    if(n == 0){
        cout<< "";
        return;
    }
    string ans = "";
    bfs(0,n,input,ans,l);
}

int main(){
    string input = "23";
    vector<vector<char>> l = {{},{},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},
                            {'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
    keypadCombination(input,l);
    return 0;
}