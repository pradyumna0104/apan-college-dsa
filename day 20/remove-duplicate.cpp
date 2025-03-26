#include <iostream>
#include <string>
using namespace std;

//using recursive approach
void removeduplicateRec(string str,string ans,int i,int arr[26]){
    if(i == str.size()){
        cout<<"ans = "<<ans<<endl;
        return;
    }
    if(arr[str[i]-'a']){//dupliacte
        removeduplicateRec(str,ans,i+1,arr);
    }else{//not dupliacte
        arr[str[i] - 'a'] = 1;
        removeduplicateRec(str,ans+str[i],i+1,arr);
    }
} 

//using iterative approach
void remDuplicate(string str){
    int n = str.length();
    string ans = "";
    int arr[26] = {0};
    for(int i=0;i<n;i++){
        if(arr[str[i]-'a'] == 0){
            arr[str[i]-'a']++;
            ans += str[i];
        }else{
            continue;
        }
    } 
    cout<<ans;
}
int main(){
    string str = "appnnacollege";
    string ans = "";
    int arr[26] = {0};
    // removeduplicateRec(str,ans,0,arr);
    remDuplicate("aappnacollege");
    return 0;
}