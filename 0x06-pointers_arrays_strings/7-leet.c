#include "main.h"

/**
 * leet - encodes a string into 1337.
 * letters a and A are replaced by 4.
 * Letters e and E are replaced by 3
 * Letters o and O are replaced by 0
 * Letters t and T are replaced by 7
 * Letters l and L are replaced by 1
 *
 * @c: pointer to string.
 *
 * Return: pointer to c.
 */
char *leet(char *c)
{
	int stringCounter, Count;
	char Letters[] = "aAeEoOtTlL";
	char Numbers[] = "4433007711";

/*  scan through string */
	stringCounter = 0;
	while (c[stringCounter] != '\0')
/* check whether Letter is found */
	{
		Count = 0;
		while (Count < 10)
		{
			if (Letters[Count] == c[stringCounter])
			{
				c[stringCounter] = Numbers[Count];
			}
			Count++;
		}
		stringCounter++;
	}
	return (c);
}
