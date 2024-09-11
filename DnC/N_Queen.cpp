#include<iostream>
#include<vector>
using namespace std;

void printSolution(vector<vector<char>> &board, int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<board[i][j] << " ";
        }
        cout<< endl;
    }
    cout<< endl << endl;
}

bool isSafe(vector<vector<char>> &board, int col, int row, int n) {
    int i = row;
    int j = col;

    // check row or left check
    while(j >= 0) {
        if(board[i][j] == 'Q') {
            return false;
        }
        j--;
    }

    // check upper left diagonal
    i = row;
    j = col;
    while(i >= 0 && j>= 0) {
        if(board[i][j] == 'Q') {
            return false;
        }
        i--;
        j--; 
    }

    // check upper left diagonal
    i = row;
    j = col;
    while(i < n && j >= 0) {
        if(board[i][j] == 'Q') {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

void solve(vector<vector<char>> &board, int col, int n) {
    // Base case
    if(col >= n) {
        printSolution(board, n);
        return;
    }

    //1 case solve karna h , baaki recursion sambhal lega
    for(int row=0; row<n; row++) {
        if(isSafe(board, col, row, n)) {
            // rakh do
            board[row][col] = 'Q';

            //recursion solution laega
            solve(board, col + 1, n);

            // backtrack
            board[row][col] = '-';
        }
    }
}

int main() {
    int n = 9;
    vector<vector<char>> board(n, vector<char>(n,'-'));
    int col = 0;
    // 0 -> empty cell
    // 1 -> Queen at yhe cell
    solve(board, col, n);
    
    return 0;
}