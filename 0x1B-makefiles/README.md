## Make Files

# Project

- Create a Makefile
  - Requirements: name of executable "holberton", rules "all"
- Requirements: task 1 + variables CC (compiler to be used), SRC (.c files)
- Create a useful Makefile
  - Requirements task 2 + variables OBJ(.o files), NAME(name of executable)
- Requirements: rules - all, clean, oclean, fclean, re, Variables: CC, SRC, OBJ, NAME, RM
- Requirements: Variables CC, SRC, OBJ, NAME, RM, CFLAGS
- create function def island_perimeter(grid): that returns the perimeter of the island described in grid.
  - grid a list of list of integers:
    - 0 represents a water zone
    - 1 represents a land zone
    - One cell is a square with side length 1
    - Grid cells are connected horizontally/vertically (not diagonally).
    - Grid is rectangular, width and height don’t exceed 100
  - grid is completely surrounded by water and there is one island or nothing
  - island doesn't have lakes.