/*
Question 1 : 
Rat in a Maze 
You are given a starting position for a rat which is stuck in a maze at an initial point (0, 0) (the 
maze can be thought of as a 2-dimensional plane). The maze would be given in the form of a 
square  matrix  of  order N  *  N  where  the  cells with  value  0  represent the maze’s  blocked 
locations while value 1 is the open/available path that the rat can take to reach its destination. 
The rat's destination is at (N - 1, N - 1). 
Your  task  is  to  find  all  the  possible  paths  that  the  rat  can  take  to  reach  from  source  to 
destination in the maze. 
The possible directions that it can take to move in the maze are 'U'(up) i.e. (x, y - 1) , 'D'(down) 
i.e. (x, y + 1) , 'L' (left) i.e. (x - 1, y), 'R' (right) i.e. (x + 1, y). 
(This problem is similar to Grid ways.) 
 
 
 
 
Sample Input  : int maze[ ][ ] = { { 1, 0, 0, 0 }, 
                                   { 1, 1, 0, 1 }, 
                                   { 1, 1, 0, 0 }, 
                                   { 0, 1, 1, 1 } }; 
 
Sample Output  : DDRDRR 
                 DRDDRR 
 
 
Hint : To track which cell has or not been visited, create a NxN vector called visited. 
This vector will be initialized with false values for all cells & make the value for a particular cell 
to true when you have visited it.
*/
#include <iostream>
using namespace std;


void ratmaze(int r,int c,int n,int m,int maze[][4],string ans){
    //base case
    if(r == n-1 && c == m-1){
        cout<<ans<<endl;
        return;
    }
    if(r>=n || c>=m){
        return;
    }
    //down check and move (row move)
    if(maze[r+1][c] == 1){
        ratmaze(r+1,c,n,m,maze,ans + "D");
    }
    //right check and move (column move)
    if(maze[r][c+1] == 1){
        ratmaze(r,c+1,n,m,maze,ans + "R");
    }

}

int main(){
    //'0' represent maze is blocked
    int maze[4][4] =   {{ 1, 0, 0, 0 }, 
                        { 1, 1, 0, 1 }, 
                        { 1, 1, 0, 0 }, 
                        { 0, 1, 1, 1 }}; 
    string ans = "";
    ratmaze(0,0,4,4,maze,ans);
    return 0;
}