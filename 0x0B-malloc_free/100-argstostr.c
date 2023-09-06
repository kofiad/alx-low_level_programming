#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: pointer to array of size ac
 * Return: NULL to ac == 0 or av == null, pointer to new string
 * NULL on fail
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, totalLength;
	char *arg;

	totalLength = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			totalLength++;
			j++;
		}
		totalLength++;
		i++;
	}
	arg = malloc((sizeof(char) * totalLength) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arg[k] = av[i][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		i++;
	}
	arg[k] = '\0';
	return (arg);
}
