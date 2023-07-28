#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string for concatenation
 * @src: source string for concatenation
 *
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	int d;
	size_t length;

	/*verify destination arrat is not null*/
	while (dest[length] != '\0')
	{
		length++;
	}

	/*innitialize for loop to concatenate two strings*/
	for (d = 0; src[d] != '\0'; d++; length++)
	{
		dest[length] = src[d];
	}

	/*add terminating null byte at the end*/
	dest[length] = '\0';
return (dest);
}
