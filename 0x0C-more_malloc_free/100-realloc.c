#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	/*Handle the case of NULL pointer*/
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return new_ptr;
	}

	/*Handle the case of new_size being 0*/
	if (new_size == 0)
	{
		free(ptr);
		return NULL;
	}

	/*If new_size equals old_size, do nothing and return ptr*/
	if (new_size == old_size)
	{
		return ptr;
	}

	/*Allocate memory for the new block*/
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return NULL; /*Return NULL on failure*/
	}

	/*Copy the contents to the new block*/
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			*((char *)new_ptr + i) = *((char *)ptr + i);
		}
	} 
	else
	{
		for (i = 0; i < new_size; i++)
		{
			*((char *)new_ptr + i) = *((char *)ptr + i);
		}
	}

	free(ptr); /*Free the old block*/

	return new_ptr; /*Return the pointer to the new block*/
}
