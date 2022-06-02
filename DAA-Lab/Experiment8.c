// To Study and Implement 8 Queens Problem

#include <stdio.h>
#include <stdbool.h>

const int N = 4;

void print(char board[N][N]) {
    for (int r = 0; r < N; ++r) {
        for (int c = 0; c < N; ++c) {
            printf("%c ", board[r][c]);
        }
        printf("\n");
    }
    printf("\n");
}

bool safe(char board[N][N], int row, int col) {

    // check row
    for (int r = row, c = 0; c < col; ++c) {
        if (board[r][c] == 'Q') {
            return false;
        }
    }

    // check upper diagonal
    for (int r = row, c = col; r >= 0 && c >= 0; --r, --c) {
        if (board[r][c] == 'Q') {
            return false;
        }
    }

    // check lower diagonal
    for (int r = row, c = col; r < N && c >= 0; ++r, --c) {
        if (board[r][c] == 'Q') {
            return false;
        }
    }

    return true;
}

void solve(char board[N][N], int col) {
    if (col == N) {
        print(board);
        return;
    }

    for (int row = 0; row < N; ++row) {
        if (safe(board, row, col)) {
            board[row][col] = 'Q';
            solve(board, col + 1);
            board[row][col] = '_';
        }
    }
}

int main() {

    char board[N][N];
    for (int r = 0; r < N; ++r) {
        for (int c = 0; c < N; ++c) {
            board[r][c] = '_';
        }
    }

    solve(board, 0); 

    return 0;
}