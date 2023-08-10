#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure
 * pointer to concatenated string on success
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int length_of_s1 = 0, length_of_s2 = 0, i, j;
	char *concatenated;

	/*calculate length of each string*/
	if (s1 != NULL)
	{
		while (s1[length_of_s1] != '\0')
		{
			length_of_s1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[length_of_s2] != '\0')
		{
			length_of_s2++;
		}
	}
	/*allocate memory for the concatenated string*/
	concatenated = (char *)malloc((length_of_s1 + length_of_s2 + 1)
			* sizeof(char));
	/*Return NULL if memory allocation fails*/
	if (concatenated == NULL)
	{
		return (NULL);
	}
	/*copy characters from s1 and s2 to concatenated string*/
	for (i = 0; i < length_of_s1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j < length_of_s2; j++)
	{
		concatenated[j] = s2[j];
	}
	/*add NULL terminator at the end*/
	concatenated[i + j] = '\0';
	/*return pointer to concatenated string*/
	return (concatenated);
}
