#include "main.h"

/**
 * _strpbrk - searches for a string in a set of bytes
 *
 * @s: character of interest
 * @accept: string of interest
 *
 * Return: pointer to byte s, that matches one of the bytes in accept
 * NULL if no such bytes is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, d;

	for (a = 0; *(s + a); a++)
	{
		for (d = 0; *(accept + d); d++)
		{
			if (*(s + a) == *(accept + d))
			{
				break;
			}
		}
		if (*(accept + d) != '\0')
		{
			return (s + a);
		}
	}
	return (0);
}
