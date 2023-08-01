#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * src to memory area dest
 *
 * @n: bytes to be copied
 * @src: source memory area
 * @dest: destination memory area
 *
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;

	for (; r < n; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
