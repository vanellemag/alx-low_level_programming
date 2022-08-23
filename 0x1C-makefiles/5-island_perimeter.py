#!/usr/bin/python3

""" 5-insland_perimeter.py """

def island_perimeter(grid):
    """ function that returns the perimeter of the island """
    row = 0
    col = 1
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                row += 1
    return ((row + col) * 2)
