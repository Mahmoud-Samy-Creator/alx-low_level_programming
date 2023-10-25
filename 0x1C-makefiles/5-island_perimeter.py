#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of an island represented by a 2D grid.

    Parameters:
        grid (list of list): A 2D grid where 1 represents land and 0 represents water.

    Returns:
        int: The perimeter of the island.
    """

    # Initialize a variable to keep track of the perimeter count.
    perimeter = 0

    # Iterate through the rows of the grid.
    for i in range(len(grid)):
        # Iterate through the columns of the grid.
        for j in range(len(grid[0])):

            # Check if the current cell contains land (has a value of 1).
            if grid[i][j] == 1:

                # Check the left side of the current cell.
                if j == 0 or grid[i][j - 1] == 0:
                    # If it's at the left boundary or adjacent to water, increment the perimeter.
                    perimeter += 1

                # Check the right side of the current cell.
                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                    # If it's at the right boundary or adjacent to water, increment the perimeter.
                    perimeter += 1

                # Check the cell above the current cell.
                if i == 0 or grid[i - 1][j] == 0:
                    # If it's at the top boundary or adjacent to water, increment the perimeter.
                    perimeter += 1

                # Check the cell below the current cell.
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    # If it's at the bottom boundary or adjacent to water, increment the perimeter.
                    perimeter += 1

    # Return the calculated perimeter of the island.
    return perimeter