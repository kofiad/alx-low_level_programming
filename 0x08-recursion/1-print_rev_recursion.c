#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string of interest
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{/*Base case: end of string*/
		return;
	}
	/*recursive call with the next character in the string*/
	_print_rev_recursion(s + 1);
	/*print current character after recursive call*/
	_putchar(*s);
}
