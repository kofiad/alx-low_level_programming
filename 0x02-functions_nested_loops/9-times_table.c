#include "main.h"

/**
 * times_table - prints  the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int n, multiple;

	for (n = 0; n <= 10; n++)
	{
		multiple = (9 * n);
		_putchar('9');
		_putchar(' ');
		_putchar('x');
		_putchar(' ');
		if (n < 10)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar(' ');
			_putchar('=');
			_putchar(' ');
		}
		if (multiple < 10)
		{
			_putchar('0' + multiple / 10);
			_putchar('0' + multiple % 10);
			_putchar('\n');
		}
	}
}
