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
	int mainDiagonalSum = 0;
	int secondDiagoanlSum = 0;
	int w;

	for (w = 0; w <  size; w++)
	{
		mainDiagonalSum += a[w * size + w];
		secondDiagonalSum += a[w * size + (size - 1 - w)];
	}
	printf("%d\n", mainDiagonalSum);
	printf("%d\n", secondDiagonalSum);
}
