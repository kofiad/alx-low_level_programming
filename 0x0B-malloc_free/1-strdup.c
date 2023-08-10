#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: string of interest
 *
 * Return: NULL if string is null
 * pointer to duplicated string on success
 * NULL if memory is unavailable
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;

	/*return NULL if string is NULL*/
	if (str == NULL)
	{
		return (NULL);
	}
	/*find length of input string*/
	while (str[length] = '\0')
	{
		length++;
	}
	/*allocate memory for duplicate string*/
	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		/*return NULL if memory allocation fails*/
		return (NULL);
	}
	/*copy characters from the input string back into the duplicate*/
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	/*return pointer to duplicated string*/
	return (duplicate);
}
