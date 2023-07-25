#include <stdio.h>

/**
 * print_array - Print n elements of an array of integers,
 * followed by a new line.
 * @a: The integer array to be printed.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
