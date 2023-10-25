#!/usr/bin/python3
"""
This module defines a function that calculates the perimeter of an island
"""


def island_perimeter(grid):
    """
    This function returns the total perimeter of an island on a grid
    """
    perimeter = 0
    if grid is None or len(grid) == 0:
        return 0
    col_len = len(grid)
    row_len = len(grid[0])

    for col in range(col_len):
        for row in range(row_len):
            if grid[col][row] == 1:
                if row >= row_len-1 or grid[col][row+1] == 0:
                    perimeter += 1
                if row < 0 or grid[col][row-1] == 0:
                    perimeter += 1
                if col < 0 or grid[col-1][row] == 0:
                    perimeter += 1
                if col >= col_len-1 or grid[col+1][row] == 0:
                    perimeter += 1
    return perimeter
