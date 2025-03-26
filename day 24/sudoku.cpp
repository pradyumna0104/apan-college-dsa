#include <iostream>
using namespace std;

void printSudoku(int sudoku[][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<sudoku[i][j]<< " ";
        }cout<<endl;
    }
    cout<<endl;
}

bool isSafe(int sudoku[][9],int row,int col,int digit){
    //horizontal check
    for(int i=0;i<9;i++){
        if(sudoku[row][i] == digit) return false;
    }
    //vertical check
    for(int i=0;i<9;i++){
        if(sudoku[i][col] == digit) return false;
    }
    //3*3 box check
    //first calculate starting row and staring col of the row
    int startrow = (row/3)*3;
    int startcol = (col/3)*3;

    for(int i=startrow;i<=startrow+2;i++){
        for(int j=startcol;j<=startcol+2;j++){
            if(sudoku[i][j] == digit) return false;
        }
    }
    return true;
}

bool sudokuSolver(int sudoku[][9],int row,int col){
    //base case
    if(row == 9){
        printSudoku(sudoku);
        return true;
    }
    int nextrow = row;
    int nextcol = col+1;
    
    if(col + 1 == 9){
        nextrow++;
        nextcol = 0;
    }

    //if value already place goto next val
    if(sudoku[row][col] != 0){
        return sudokuSolver(sudoku,nextrow,nextcol);
    }

    for(int digit=1;digit<=9;digit++){
        if(isSafe(sudoku,row,col,digit)){
            sudoku[row][col] = digit;
            if(sudokuSolver(sudoku,nextrow,nextcol)){
                return true;
            }
            sudoku[row][col] = 0;
        }
    }
    return false;
}

int main(){

    int sudoku[9][9] = {{0, 0, 8, 0, 0, 0, 0, 0, 0},
                        {4, 9, 0, 1, 5, 7, 0, 0, 2},
                        {0, 0, 3, 0, 0, 4, 1, 9, 0},
                        {1, 8, 5, 0, 6, 0, 0, 2, 0},
                        {0, 0, 0, 0, 2, 0, 0, 6, 0},
                        {9, 6, 0, 4, 0, 5, 3, 0, 0},
                        {0, 3, 0, 0, 7, 2, 0, 0, 4},
                        {0, 4, 9, 0, 3, 0, 0, 5, 7},
                        {8, 2, 7, 0, 0, 9, 0, 1, 3}};
    
    sudokuSolver(sudoku,0,0);
    return 0;
}
/*
o/p:
2 1 8 3 9 6 7 4 5 
4 9 6 1 5 7 8 3 2
7 5 3 2 8 4 1 9 6
1 8 5 7 6 3 4 2 9 
3 7 4 9 2 8 5 6 1
9 6 2 4 1 5 3 7 8 
5 3 1 6 7 2 9 8 4
6 4 9 8 3 1 2 5 7
8 2 7 5 4 9 6 1 3
*/