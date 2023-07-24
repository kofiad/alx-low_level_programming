#include "main.h"
#include <stddef.h>

/**
 * _puts - prints a string followed by a new line,
 * to stdout
 *
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
}
