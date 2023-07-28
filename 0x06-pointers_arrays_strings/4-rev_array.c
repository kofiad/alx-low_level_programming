#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 *
 * @a: array to be reversed
 * @n: number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int count, store;

	n = n-1;
	count = 0;
	while (count <= n)
	{
		store = a[count];
		a[count++] = a[n];
		a[n--] = store;
	}
}
