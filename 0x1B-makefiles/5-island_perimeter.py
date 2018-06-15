#!/usr/bin/python3


def island_perimeter(grid):
    """
    This function calculated the perimeter
    of a grid
    """
    pm = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if x == 0 or grid[x - 1][y] == 0:
                    pm += 1
                if y == 0 or grid[x][y - 1] == 0:
                    pm += 1
                if x == len(grid) - 1 or grid[x + 1][y] == 0:
                    pm += 1
                if y == len(grid[x]) - 1 or grid[x][y + 1] == 0:
                    pm += 1
    return (pm)
