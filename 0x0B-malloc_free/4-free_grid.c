#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - It's not bragging if you can back it up
 * free_grid - Write a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function
 * @grid: pointer to 2D array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
