#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer to pointer of string s
 * @to: pointer to character to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
