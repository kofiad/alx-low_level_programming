#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * fiis the first n bytes of the memory area pointed to by s
 * with the constant byte b
 *
 * @s: points to a memory area
 * @b: constant byte value
 * @n: number of bytes of memory
 *
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(s + a) = b;
		a++;
	}
	return (s);
}
