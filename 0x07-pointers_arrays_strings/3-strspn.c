#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string of interest
 * @accept: prefix substring
 *
 * Return: number of bytes in initial segment of s
 * which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				i++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (i);
			}
		}
		s++;
	}
	return (i);
}
