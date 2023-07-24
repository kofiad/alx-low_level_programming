#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l, LengthOfString = 0;
	char k;

	if (s != NULL)
	{
		while (s[LengthOfString] != '\0')
		{
			LengthOfString++;
		}
		for (l = 0; l < LengthOfString / 2; l++)
		{
			k = s[l];
			s[l] = s[LengthOfString - 1 - l];
			s[LengthOfString - 1 - l] = k;
		}
	}


}
