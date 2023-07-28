#include "main.h"

/**
 * *_strncat - concatenates two strings
 * it will use at most the n bytes from src
 * src does not need to be null-terminated
 *
 * @dest:
 * @src:
 * @n:
 *
 * Return: *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s, length = 0;

	while (dest[length])
	{
		length++;
	}
	for (s = 0; s < n && src[s] != '\0'; s++)
	{
		dest[length];
		length ++;
	}
	dest[length] = '\0';
	return (dest);
}
