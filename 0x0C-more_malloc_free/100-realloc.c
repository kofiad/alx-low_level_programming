#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to previous memory allocation
 * @old_size: size of allocated space for ptr
 * @new_size: sice of new memory block
 *
 * Return: ptr if new_size == old_size
 * NULL, if new_size = 0, and ptr != NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *j;
	char *old_pointer = ptr;
	unsigned int n;

	if (ptr == NULL)
	{
		j = malloc(new_size);
		return (j);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	j = malloc(new_size);
	if (j == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		new_size = old_size;
	}
	for (n = 0; n < new_size; n++)
	{
		j[n] = old_pointer[n];
	}
	free(ptr);
	return (j);
}
