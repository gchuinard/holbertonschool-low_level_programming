#!/usr/bin/python3
"""
Perimeter module
"""


def island_perimeter(grid):
    """
    Calcule the perimeter of an island
    args:
        grid (matrice): the island
    """

    nbr_line = len(grid)
    nbr_col = len(grid[0])
    perimeter = 0

    for line in range(nbr_line):
        for col in range(nbr_col):
            count = 0
            if grid[line][col] == 1:
                if line > 0:
                    count += grid[line - 1][col]
                if line < (nbr_line - 1):
                    count += grid[line + 1][col]
                if col > 0:
                    count += grid[line][col - 1]
                if col < (nbr_col - 1):
                    count += grid[line][col + 1]
                perimeter = perimeter + 4 - count
    return perimeter


grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
        ]
print(island_perimeter(grid))
"""
nbr_line = len(grid)
nbr_col = len(grid[0])
perim = 0
for line in range(nbr_line):
    for j in range(nbr_col):
        count = 0
        if grid[line][j] == 1:
            if line > 0:
                count += grid[line - 1][col]
            if line < (nbr_line - 1):
                count += grid[line + 1][col]
            if col > 0:
                count += grid[line][col - 1]
            if col < (nbr_col - 1):
                count += grid[line][col + 1]
            perim = perim + 4 - count
print(perim)
"""
