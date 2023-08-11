#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to concatenated string success
 * NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int w, e, r;
	char *s;

	if (s1 == NULL)
		w =  0;

	else
		for (w = 0; s1[w]; ++w)
			;

	if (s2 == NULL)
		e = 0;

	else
		for (e = 0; s2 [e]; ++e)
			;

	if (e > n)
		e = n;
	s = malloc(sizeof(char) * (w + e + 1));

	if (s == NULL)
		return (NULL);

	for (r = 0; r < w; r++)
		s[r] = s1[r];

	for (r = 0; r < e; r++)
		s[r + w] = s2[r];

	s[w + e] = '\0';
	return (s);
}
