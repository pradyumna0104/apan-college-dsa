//how many ways you can fill a 2*n floor wiith 2*1 size tiles
#include <iostream>
using namespace std;
int tiling(int n){//2*n
    if(n == 0||n == 1){
        return 1;
    }
    int ans1 = tiling(n-1);// vertical:2*(n-1)  
    int ans2 = tiling(n-2);//horizontal:2*(n-2)
    return ans1+ans2;
}
int main(){
    cout<<tiling(4)<<endl;
    return 0;
}