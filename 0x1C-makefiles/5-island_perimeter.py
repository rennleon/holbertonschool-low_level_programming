#!/usr/bin/python3
""" This modules defines a function to get an island perimeter """

ggrid = None
gwidth, gheight = 0, 0


def cell_perimeter(row, col):
    """ Calculates the perimeter of a cell """
    cell = 4
    if row - 1 >= 0 and ggrid[row - 1][col] != 0:
        cell -= 1
    if row + 1 < gheight and ggrid[row + 1][col] != 0:
        cell -= 1
    if col - 1 >= 0 and ggrid[row][col - 1] != 0:
        cell -= 1
    if col + 1 < gwidth and ggrid[row][col + 1] != 0:
        cell -= 1

    return cell


def expand(row, col):
    """ Expands the island searching for 1's """
    if row < 0 or row >= gheight:
        return 0
    if col < 0 or col >= gwidth:
        return 0
    if ggrid[row][col] != 1:
        return 0

    perimeter = cell_perimeter(row, col)
    # mark block cell as visited
    ggrid[row][col] = -1

    perimeter += expand(row - 1, col)
    perimeter += expand(row + 1, col)
    perimeter += expand(row, col - 1)
    perimeter += expand(row, col + 1)

    return perimeter


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid

        Args: grid (list of lists)
    """
    # Grid is completely surrounded, there is one island or nothing
    global ggrid, gheight, gwidth

    ggrid = grid
    gheight = len(ggrid)
    gwidth = len(ggrid[0])

    max_perimeter = 0

    for row in range(gheight):
        for col in range(gwidth):
            if ggrid[row][col] == 1:
                return expand(row, col)

    return 0
