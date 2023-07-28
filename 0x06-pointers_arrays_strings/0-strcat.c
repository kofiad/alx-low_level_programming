#include "main.h"

/**
 * *_strcat - concatenates two strings
 * string_length - finds length of a string
 * 
 * @str: string whose length is to be determined
 * @dest: destination string for concatenation
 * @src: source string for concatenation
 *
 * Returns: length,
 * *dest for _strcat
 */
/*fuction to detemine length of string*/
size_t string_length(const char *str)
{
	size_t length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
return (length);
}
/*fuction to concatenate two strings*/
char *_strcat(char *dest, char *src)
{
	char *destination_start =  dest;
	size_t destination_length = string_length(dest);
	size_t source_length = string_length(src);

	/*moving pointer to end of string*/
	dest += destination_length;

	/*copying characters from source to destination
	 * till end of source string is reached
	 */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/*add terminating null byte at the end*/
	*dest = '\0';
return (destination_start);
}
