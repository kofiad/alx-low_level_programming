#include "main.h"
#include <stddef.h>

/**
 * puts_half - prints half of a string
 * followed by a new line
 *
 * @str: string for printing
 */
void puts_half(char *str)
{
	if (str != NULL)
	{
		size_t i, len = 0;

		while (str[len] != 0)
		{
			len++;
		}
		for (i = ((len + 1) / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}

}
