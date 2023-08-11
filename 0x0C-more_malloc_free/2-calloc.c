#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: array of interest
 * @size: number of bytes to allocate
 *
 * Return: pointer to allocation
 * NULL if nmemb or size = 0
 * NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int d;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(nmemb * size);

	if (i == NULL)
		return (NULL);

	for (d = 0; d < (nmemb * size); d++)
		i[d] = 0;
	return (i);
}
