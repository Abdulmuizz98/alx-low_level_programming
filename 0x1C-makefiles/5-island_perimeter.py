#!/usr/bin/python3
"""
Module that defines the 'island_perimeter' function
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid

    grid:  a list of list of integers
           - 0 represents a water zone
           - 1 represents a land zone
           - one cell is a square with side length 1
    """
    count, rows, cols = (0, len(grid), len(grid[0]))

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 0:
                continue

            # Check for top perimeter if not in the top row.
            if r == 0 or grid[r-1][c] == 0:
                count += 1

            # Check for bottom perimeter if not in the bottom row.
            if r == rows-1 or grid[r+1][c] == 0:
                count += 1

            # Check for left perimeter if not in the first column.
            if c == 0 or grid[r][c-1] == 0:
                count += 1

            # Check for right perimeter if not in the last column.
            if c == cols-1 or grid[r][c+1] == 0:
                count += 1
    return count
