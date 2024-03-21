# Sudoku Solver

This is a simple Sudoku solver implemented in C. It uses a backtracking algorithm to find a solution for a given Sudoku puzzle.

## Features

- Solves Sudoku puzzles of any difficulty level.
- Uses a backtracking algorithm for efficient solving.
- Supports 9x9 Sudoku grids.

## Sudoku Input Format
- Use a 9x9 grid to represent the Sudoku puzzle.
- Use 0 to represent empty cells.
- Fill in the known numbers in the puzzle.

Example:

0 0 0 0 0 0 0 9 0

1 9 0 4 7 0 6 0 8

0 5 2 8 1 9 4 0 7

2 0 0 0 4 8 0 0 0

0 0 9 0 0 0 5 0 0

0 0 0 7 5 0 0 0 9

9 0 7 3 6 4 1 8 0

5 0 6 0 8 1 0 7 4

0 8 0 0 0 0 0 0 0
