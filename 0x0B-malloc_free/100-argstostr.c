#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all argument of my program
 *
 * @ac: argument count
 * @av: argument value
 *
 * Return: pointer to a new string
 * NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int totalLength = 0;
	int i = 0, j = 0, k=0;

	/*return NULL if av is NULL or ac is zero or negative*/
	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	/*Calculate total length needed for concateneated string*/
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			totalLength++;
			j++;
		}
		/*creating newline character*/
		totalLength++;
	}
	/*allocating memory for concatenated string*/
	result = (char *)malloc((totalLength + 1) * sizeof(char));
	if (result == NULL)
	{/*return NULL on memory allocation failure*/
		return (NULL);
	}
	/*Copy each argument followed by newline character to the result*/
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			result[k] = av[i][j];
			k++;
			j++;
		}
		if (i < ac - 1)
		{
			result[k] = '\n';/*adds newline character*/
			k++;
		}
	}
	result[k] = '\0';/*add NULL terminator at the end*/
	return (result);
}
