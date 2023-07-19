#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabets in lowercase
 * followed by new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphabet_x10;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (alphabet_x10 = 'a'; alphabet_x10 <= 'z'; alphabet_x10++)
		{
			_putchar(alphabet_x10);
		}
		_putchar('\n');
	}
}
