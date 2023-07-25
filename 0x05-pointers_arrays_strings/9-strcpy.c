#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 * to the buffer pointed to by dest.
 * The copying stops when the null terminator (\0) of src is encountered.
 *
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /* Copy the null terminator */

	return (dest_start);
}
