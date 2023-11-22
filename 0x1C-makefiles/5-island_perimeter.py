#!/usr/bin/python3

def island_perimeter(grid):
    """
    Compute the perimeter of an island represented in a grid.

    Args:
    grid (list of lists of int): A grid where
    '1' represents land and '0' represents water.

    Returns:
    int: The total perimeter of the island.
    """
    if not grid:
        return 0

    row_count, col_count = len(grid), len(grid[0])
    perimeter = 0

    for row in range(row_count):
        for col in range(col_count):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 1
                if row < row_count - 1 and grid[row + 1][col] == 1:
                    perimeter -= 1
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 1
                if col < col_count - 1 and grid[row][col + 1] == 1:
                    perimeter -= 1

    return perimeter
