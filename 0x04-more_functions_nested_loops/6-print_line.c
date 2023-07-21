#include "main.h"

/**
 * print_line - draws a straight line in the terminal using '_'
 *
 * @n: number of times '_' is printed
 *
 * Return: void
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
