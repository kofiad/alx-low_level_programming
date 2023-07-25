#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 *
 * @a: array pointer
 * @n: number of element to be printed
 */
void print_array(int *a, int n)
{
	int k;

	if (a != NULL && n > 0)
	{
		for (k = 0; k < n; k++)
		{
			printf("%d", a[k]);
			if (k < n - 1)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
