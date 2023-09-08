#include "main.h"

/**
 * _printstr - moves a string one place to the left and prints the string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */
void _printstr(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulRemainder, add, addRemainder;

	mulRemainder = addRemainder = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulRemainder;
		mulRemainder = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addRemainder;
		addRemainder = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addRemainder += mulRemainder; k >= 0 && addRemainder; k--)
	{
		add = (dest[k] - '0') + addRemainder;
		addRemainder = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addRemainder)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * ArgumentChecker - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int ArgumentChecker(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * Start - initializes a string
 * @str: sting to initialize
 * @l: length of strinf
 *
 * Return: void
 */
void Start(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
	str[i] = '\0';
}

