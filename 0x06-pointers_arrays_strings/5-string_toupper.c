#include "main.h"

/**
 * *string_toupper - changes all lowercase to uppercase
 *
 *@l: string for conversion
 *
 * Return: pointer to uppercase string
 */
char *string_toupper(char *l)
{
	int length = 0;

	while (l[length] != '\0')
	{
		if (l[length] >= 97 && l[length] <= 122)
		{
			l[length] = l[length] - 32;
		}
		length++;
	}
	return (l);
}
