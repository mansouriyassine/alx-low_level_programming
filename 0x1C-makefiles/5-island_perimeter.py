#!/usr/bin/python3

"""
This module contains a function to calculate the perimeter
of an island. The island is represented in a grid where '0'
represents water and '1' represents land. The grid cells
are connected horizontally and vertically but not diagonally.
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of an island represented in a grid.

    Args:
    grid (list of lists of int): A grid where
    '1' represents land and '0' represents water.

    Returns:
    int: The total perimeter of the island.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1

    return size * 4 - edges * 2
