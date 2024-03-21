#!/usr/bin/python3
"""Grid island perimeter calculator"""


def island_perimeter(grid):
    """Grid island perimeter calculator"""
    perimeter = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                if j == 0:
                    if i == 0 or i == (len(grid[i]) - 1) :
                        perimeter += 2
                    else:
                        perimeter += 1
                if i == 0:
                    if j != 0:
                        perimeter += 1
                try:
                    if grid[i + 1][j] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
                try:
                    if grid[i - 1][j] == 0 and (i - 1) >= 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
                try:
                    if grid[i][j + 1] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
                try:
                    if grid[i][j - 1] == 0 and (j - 1) >= 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
    return perimeter
