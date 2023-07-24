#include "main.h"
#include <stddef.h>

/**
 * _strlen - retuns the length of a string
 *
 * @s: string for determining length
 *
 * Return: length
 */
int _strlen(char *s)
{
	int lengthOfString = 0;

	while (s[lengthOfString] != 0)
	{
		lengthOfString++;
	}
	return (lengthOfString);
}
