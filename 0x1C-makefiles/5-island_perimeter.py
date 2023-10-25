#!/usr/bin/python3
"""
This module defines a function that calculates the perimeter of an island
"""


def island_perimeter(grid):
    """
    This function returns the total perimeter of an island on a grid
    """
    perimeter = 0

    if len(grid) == 0 or len(grid[0]) == 0 or grid:
        return perimeter
    else:
        col_len = len(grid)
        row_len = len(grid[0])

    for col in range(len(grid)):
        for row in range(len(grid[col])):

            if grid[col][row] == 1:
                if row > row_len or grid[col][row+1] == 0:
                    perimeter += 1
                if row < 0 or grid[col][row-1] == 0:
                    perimeter += 1
                if col < 0 or grid[col-1][row] == 0:
                    perimeter += 1
                if col > row_len or grid[col+1][row] == 0:
                    perimeter += 1
    return perimeter
