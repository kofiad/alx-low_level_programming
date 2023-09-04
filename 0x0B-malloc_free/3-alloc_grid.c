#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers
 *
 * @width: width of array 
 * @height: height of array
 *
 * Return: NULL on failure
 * if width/height is 0 or negative NULL
 * otherwise pointer to array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	/*check if width or height is 0 or negative*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*allocate memory for an array of pointers to int (rows)*/
	grid = (int **)malloc(height * sizeof(int *));
	/*return NULL on failure*/
	if (grid == NULL)
	{
		return (NULL);
	}
	/*use for loop to create colums*/
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{/*free memory on failure*/
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		/*initialize each element in the row to 0*/
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	/*return pointer to the allocated grid*/
	return (grid);
}
