//print all Binary Strings of Size N without any consecutive 1s.
#include <iostream>
#include <string>
using namespace std;
void binString(int n,int lastplace,string ans){
    if(n == 0){
        cout<<ans<<endl;
        return;
    }
    if(lastplace!= 1){
        binString(n-1, 0, ans + '0');
        binString(n-1, 1, ans + '1');
    }else{
        binString(n-1, 0, ans + '0');
    }
}
//without lastplace
void binString1(int n,string ans){
    if(n == 0){
        cout<<ans<<endl;
        return;
    }
    if(ans[ans.size()-1] != '1'){
        binString1(n-1, ans + '0');
        binString1(n-1, ans + '1');
    }else{
        binString1(n-1, ans + '0');
    }
}
int main(){
    string ans ="";
    binString(3,0,ans);
    binString1(3,ans);
    return 0;
}