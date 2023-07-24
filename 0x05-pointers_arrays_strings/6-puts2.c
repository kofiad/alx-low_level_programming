#include <stddef.h> /* For size_t */
#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 *
 * @str: The input null-terminated string.
 */
void puts2(char *str)
{
	if (str != NULL)
	{
		size_t i, length = 0;

		while (str[length] != '\0')
	{
		length++;
	}
		for (i = 0; i < length; i += 2)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
