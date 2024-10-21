#include <iostream>
#include <vector>
vector<vector<int>> solutions;

void f(vector<vector<int>>& board){
    vector<int> res;
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board.size();j++){
            res.push_back(board[i][j]);
        }
    }
    solutions.push_back(res);
}

using namespace std;
bool isPossible(int n, int row, int column, vector<vector<int>>& board) {
    for (int i = row - 1; i >= 0; i--) {
        if (board[i][column] == 1) {
            return false;
        }
    }
    for (int i = row - 1, j = column - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }
    for (int i = row - 1, j = column + 1; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 1) {
            return false;
        }
    }
    return true;
}

void queenhelper(int n, int row, vector<vector<int>>& board) {
    if (row == n){
        f(board);
        return;
    }

    for (int j = 0; j < n; j++) {
        if (isPossible(n, row, j, board)) {
            board[row][j] = 1;
            queenhelper(n, row + 1, board);
            board[row][j] = 0;
        }
    }
    return; 
}

vector<vector<int>> nQueens(int n) {
    vector<vector<int>> board(n, vector<int>(n, 0));
    queenhelper(n, 0, board);
    return solutions;
}