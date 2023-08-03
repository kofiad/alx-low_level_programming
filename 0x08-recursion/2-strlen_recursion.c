#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string of interest
 *
 * Returns: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return;
	}
	return (1 + _strlen_recursion(s + 1);
}
