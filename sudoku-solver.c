#include <stdio.h>

int isAvailable(int puzzle[][9], int row, int col, int num) {
    int rowStart = (row / 3) * 3;
    int colStart = (col / 3) * 3;
    
    for (int i = 0; i < 9; ++i) {
        if (puzzle[row][i] == num || puzzle[i][col] == num ||
            puzzle[rowStart + (i % 3)][colStart + (i / 3)] == num) {
            return 0;
        }
    }
    return 1;
}

int fillSudoku(int puzzle[][9], int row, int col) {
    if (row == 9) {
        return 1;
    }
    
    if (col == 9) {
        return fillSudoku(puzzle, row + 1, 0);
    }
    
    if (puzzle[row][col] != 0) {
        return fillSudoku(puzzle, row, col + 1);
    }
    
    for (int num = 1; num <= 9; ++num) {
        if (isAvailable(puzzle, row, col, num)) {
            puzzle[row][col] = num;
            if (fillSudoku(puzzle, row, col + 1)) {
                return 1;
            }
            puzzle[row][col] = 0;
        }
    }
    
    return 0;
}

int main() {
    int puzzle[9][9] = {{0, 0, 0, 0, 0, 0, 0, 9, 0},
                        {1, 9, 0, 4, 7, 0, 6, 0, 8},
                        {0, 5, 2, 8, 1, 9, 4, 0, 7},
                        {2, 0, 0, 0, 4, 8, 0, 0, 0},
                        {0, 0, 9, 0, 0, 0, 5, 0, 0},
                        {0, 0, 0, 7, 5, 0, 0, 0, 9},
                        {9, 0, 7, 3, 6, 4, 1, 8, 0},
                        {5, 0, 6, 0, 8, 1, 0, 7, 4},
                        {0, 8, 0, 0, 0, 0, 0, 0, 0}};

    if (fillSudoku(puzzle, 0, 0)) {
        printf("\n+-----+-----+-----+\n");
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                printf("|%d", puzzle[i][j]);
            }
            printf("|\n");
            if ((i + 1) % 3 == 0) {
                printf("+-----+-----+-----+\n");
            }
        }
    } else {
        printf("\n\nNO SOLUTION\n\n");
    }

    return 0;
}