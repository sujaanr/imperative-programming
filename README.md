# sudoku solver

this is a simple sudoku solver implemented in c. it uses a backtracking algorithm to find a solution for a given sudoku puzzle.

## features

- solves sudoku puzzles of any difficulty level.
- uses a backtracking algorithm for efficient solving.
- supports 9x9 sudoku grids.

## sudoku input format
- use a 9x9 grid to represent the sudoku puzzle.
- use 0 to represent empty cells.
- fill in the known numbers in the puzzle.

example:

0 0 0 0 0 0 0 9 0

1 9 0 4 7 0 6 0 8

0 5 2 8 1 9 4 0 7

2 0 0 0 4 8 0 0 0

0 0 9 0 0 0 5 0 0

0 0 0 7 5 0 0 0 9

9 0 7 3 6 4 1 8 0

5 0 6 0 8 1 0 7 4

0 8 0 0 0 0 0 0 0
