#!/usr/bin/python3

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
