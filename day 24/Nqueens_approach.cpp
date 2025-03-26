//print all possible solution
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// void PrintBoard(vector<vector<char>> board){
//     int n = board.size();
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<board[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }

// bool isSafe(vector<vector<char>> board,int row,int col){
//     int n = board.size();
//     //vertical check
//     for(int i=0;i<col;i++){
//         if(board[row][i] == 'Q') return false;
//     }
//     //horizontal check
//     for(int i=0;i<row;i++){
//         if(board[i][col] == 'Q') return false;
//     }
//     //diagonal left
//     for(int i=row,j=col;i>=0&&j>=0;i--,j--){
//         if(board[i][j] == 'Q') return false;
//     }
//     //diagonal right
//     for(int i=row,j=col;i>=0&&j<n;i--,j++){
//         if(board[i][j] == 'Q') return false;
//     }
//     return true;
// }

// //now our problem is to place ith queens in ith place
// void nQueens(vector<vector<char>> board,int row){
//     int n = board.size();
//     if(row == n){
//         PrintBoard(board);
//         return;
//     }
//     //for each columns run loop
//     for(int j=0;j<n;j++){
//         if(isSafe(board,row,j)){
//             board[row][j] = 'Q';
//             nQueens(board,row+1);
//             board[row][j] = '.';
//         }
//     }
// }

// int main(){

//     vector<vector<char>> board;

//     int n = 4;

//     for(int i=0;i<n;i++){
//         vector<char> newRow;
//         for(int j=0;j<n;j++){
//             newRow.push_back('.');
//         }
//         board.push_back(newRow);
//     }

//     nQueens(board,0);

//     return 0;
// }
//---------------------------------------------------------------------------------------

/*
//pratice check print all possible solution
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printBoard(vector<vector<char>> board){
    int n = board.size();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
bool isSafe(vector<vector<char>> board, int row, int col){
    int n = board.size();
    // horizontal check
    for (int i = 0; i < row; i++){
        if (board[i][col] == 'Q')
            return false;
    }
    // vertical check
    for (int i = 0; i < col; i++){
        if (board[row][i] == 'Q')
            return false;
    }
    // diagonal left
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--){
        if(board[i][j] == 'Q') return false;
    }
    //diagonal right
    for(int i=row,j=col;i>=0&&j<n;i--,j++){
        if(board[i][j] == 'Q') return false;
    }
    return true;
}
int nQueens(vector<vector<char>> board, int row){
    int n = board.size();
    if (row == n){
        printBoard(board);
        return 1;
    }
    // traverse each columns
    int count = 0;
    for (int j = 0; j < n; j++){
        if(isSafe(board,row,j)){
            board[row][j] = 'Q';
            count += nQueens(board, row + 1);
            board[row][j] = '.';
        }
    }
    return count;
}
int main(){
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n, '.'));
    cout<< "count = "<<nQueens(board, 0)<<endl;
    return 0;
}
*/
//---------------------------------------------------------------------------------------
//print any one solution