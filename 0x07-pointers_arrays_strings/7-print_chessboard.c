#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: input
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int p, c;

	for (p = 0; p < 8; p++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[p][c]);
		}
		_putchar('\n');
	}
}
