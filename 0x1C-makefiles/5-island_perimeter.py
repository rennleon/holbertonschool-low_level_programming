#!/usr/bin/python3
""" This modules defines a function to get an island perimeter """

ggrid = None
gwidth, gheight = 0, 0


def cell_perimeter(row, col):
    """ Calculates the perimeter of a cell """
    cell = 4
    if row - 1 >= 0 and ggrid[row - 1][col] != 0:
        cell -= 1
    if row + 1 < height and ggrid[row + 1][col] != 0:
        cell -= 1
    if col - 1 >= 0 and ggrid[row][col - 1] != 0:
        cell -= 1
    if col + 1 < width and ggrid[row][col + 1] != 0:
        cell -= 1

    return cell


def expand(row, col):
    """ Expands the island searching for 1's """
    if row < 0 or row >= height:
        return 0
    if col < 0 or col >= width:
        return 0

    perimeter = cell_perimeter(row, col)
    # mark block cell as visited
    ggrid[row][col] = -1

    perimeter += expand(row - 1, col, calc_cell)
    perimeter += expand(row + 1, col, calc_cell)
    perimeter += expand(row, col - 1, calc_cell)
    perimeter += expand(row, col + 1, calc_cell)

    return perimeter


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid

        Args: grid (list of lists)
    """
    # Grid is completely surrounded, there is one island or nothing

    ggrid = grid
    gheight = len(ggrid)
    gwidth = len(ggrid[0])

    max_perimeter = 0

    for row in range(gheight):
        for col in range(gwidth):
            if ggrid[row][col] == 1:
                return expand_island(row, col, calc_cell)

    return 0
