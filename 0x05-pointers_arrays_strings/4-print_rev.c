#include "main.h"
#include <stdio.h>

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
		while (s[lengthOfString] != '\0')
		{
			lengthOfString++;
		}
	for (l = lengthOfString - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
	}
}
