#!/usr/bin/python3
<<<<<<< HEAD

"""Defines an island perimeter measuring function."""



def island_perimeter(grid):
    """
    This function returns perimeter of grid
    """
    per = 0

    for i in range(len(grid)):
        for p in range(len(grid[i])):
            if grid[i][p] == 1:
                per += 4
                if grid[i - 1][p] == 1 and i > 0:
                    per -= 1

                    if grid[i][p - 1] == 1 and p > 0:
                        per -= 1

                        try:
                            if grid[i][p + 1] == 1:
                                per -= 1
                        except Exception:
                            pass

                        try:
                            if grid[i + 1][p] == 1:
                                per -= 1
                        except Exception:
                            pass

                        return per
=======
"""Module that calculates the perimeter of an island in a grid."""


def num_water_neighbors(grid, i, j):
    """Returns the number of water neighbors a cell has in a grid."""

    num = 0

    if i <= 0 or not grid[i - 1][j]:
        num += 1
    if j <= 0 or not grid[i][j - 1]:
        num += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        num += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += num_water_neighbors(grid, i, j)

    return perimeter
>>>>>>> 9c61bcc16dca01bec51288a13450fb80beb8a8ac
