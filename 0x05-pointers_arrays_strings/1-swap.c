#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: first integer to be swaped with the next
 * @b: next integer to be swaped with the previous
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
