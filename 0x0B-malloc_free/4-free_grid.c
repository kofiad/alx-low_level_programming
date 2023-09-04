#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by alloc_grid function
 *
 * @grid: 2D grid created
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	/*checking if grid or height is empty or less than 0*/
	if (grid == NULL || height <= 0)
	{
		return;
	}
	/*free memory for each row and set row pointers to NULL*/
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	/*free memory for row pointers and set grid to NULL*/
	free(grid);
	grid = NULL;
}
