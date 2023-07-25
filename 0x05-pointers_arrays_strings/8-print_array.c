#include <stdio.h>

/**
 * print_array - Print n elements of an array of integers, followed by a new line.
 * @a: The integer array to be printed.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	if (a == NULL || n <= 0)
		return;

	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
