#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: pointer to array a
 * @size: size of array a
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int w, size1, size2;

	size1 = 0;
	size2 = 0;

	for (w = 0; w < (size * size); w++)
	{
		if (w % (size + 1) == 0)
		{
			size += a[w];
		}
		if (w % (size - 1) == 0 && w != 0 && w < size * size - 1)
		{
			size2 += a[w];
		}
	}
	printf("%d, %d\n", size1, size2);
}
