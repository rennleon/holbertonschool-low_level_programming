#!/usr/bin/python3
""" This modules defines a function to get an island perimeter """


def create_calc_cell(grid, width, height):
    """ Injects grid's dimensions """
    def cell_perimeter(row, col):
        """ Calculates the perimeter of a cell """
        cell = 4
        if row - 1 >= 0 and grid[row - 1][col] != 0:
            cell -= 1
        if row + 1 < height and grid[row + 1][col] != 0:
            cell -= 1
        if col - 1 >= 0 and grid[row][col - 1] != 0:
            cell -= 1
        if col + 1 < width and grid[row][col + 1] != 0:
            cell -= 1

        return cell

    return cell_perimeter


def create_expand(grid, width, height):
    """ Injects grid's dimensions """
    def expand(row, col, calc_cell):
        """ Expands the island searching for 1's """
        if row < 0 or row >= height:
            return 0
        if col < 0 or col >= width:
            return 0

        perimeter = 0

        cell = calc_cell(row, col)
        perimeter += cell

        # mark block cell as visited
        grid[row][col] = -1

        if row - 1 >= 0 and grid[row - 1][col] == 1:
            perimeter += expand(row - 1, col, calc_cell)
        if row + 1 < height and grid[row + 1][col] == 1:
            perimeter += expand(row + 1, col, calc_cell)
        if col - 1 >= 0 and grid[row][col - 1] == 1:
            perimeter += expand(row, col - 1, calc_cell)
        if col + 1 < width and grid[row][col + 1] == 1:
            perimeter += expand(row, col + 1, calc_cell)

        return perimeter

    return expand


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid

        Args: grid (list of lists)
    """
    # Grid is completely surrounded, there is one island or nothing

    height = len(grid)
    width = len(grid[0])

    max_perimeter = 0

    expand_island = create_expand(grid, width, height)
    calc_cell = create_calc_cell(grid, width, height)

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                return expand_island(row, col, calc_cell)

    return 0
