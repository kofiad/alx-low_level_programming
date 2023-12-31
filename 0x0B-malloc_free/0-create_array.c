#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * and initializes it with a specific character
 *
 * @size: size of array
 * @c: character
 *
 * Return: NULL, if size = 0
 * *array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);  /*Return NULL if size is 0*/
	}

	array = (char *)malloc(size * sizeof(char));  /*Allocate memory*/

	if (array == NULL)
	{
		return (NULL);  /*Return NULL if memory allocation fails*/
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;  /*Initialize each element with the given char*/
	}

	return (array);  /*Return the pointer to the array*/
}
