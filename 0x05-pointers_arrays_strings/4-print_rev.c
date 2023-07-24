#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * print_rev - prints a string in reverse
 * followed by new line
 *
 * @s: string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l, lengthOfString = 0;

	if (s != NULL)
	{
		lengthOfString = strlen(s);
	}
	for (l = lengthOfString; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
