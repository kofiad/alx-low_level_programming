#include "main.h"

/**
 * *_strncpy - copies a string
 *
 * @dest: destination string;
 * @src: source string
 * @n: number of bytes from source
 *
 * Return: *dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int numbytes;

	for (numbytes = 0; numbytes < n && src[numbytes] != 0; numbytes++)
	{
		dest[numbytes] = src[numbytes];
	}
	for (; numbytes < n; numbytes++)
	{
		dest[numbytes] = '\0';
	}
	return (dest);
}
