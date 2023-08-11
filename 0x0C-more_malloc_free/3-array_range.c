#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to new array, success
 * min > max, return NULL
 * malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int j, size_of_array, *pointer;

	if (min > max)
		return (NULL);

	size_of_array = max - min + 1;
	pointer = malloc(sizeof(int) * size_of_array);

	if (pointer == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		pointer[j] = min++;

	return (pointer);
}
