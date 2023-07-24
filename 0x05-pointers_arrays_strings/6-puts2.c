#include "main.h"
#include <stddef.h>

/**
 * puts2 - prints every other character of a string
 * starting withthe first character
 *
 * @str: string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int l, lem;

	if (str != NULL)
	{
		while (str[lem] != '\0')
		{
			lem++;
		}
		for (l = 0; l < lem; l += 2)
		{
			_putchar(str[l]);
		}
		_putchar('\n');
	}

}
