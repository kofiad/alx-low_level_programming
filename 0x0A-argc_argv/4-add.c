#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - adds positive numbers
 *
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int d, s, a, sum = 0;
	bool it_is_number;

	/*checking for number of arguments in argc*/
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (s = 1; s < argc; s++)
	{
		/*reset boolean flag for each argument*/
		it_is_number = true;
		/*checking if each character of argument is a digit*/
		for (a = 0; argv[s][a] != '\0'; a++)
		{
			if (argv[s][a] < '0' || argv[s][a] > '9')
			{
				it_is_number = false;
				break;
			}
		}
	if (!it_is_number)/*display error when not a number*/
	{
		printf("Error\n");
		return (1);
	}
	/*convert the argument into an integer and add to sum*/
	d = atoi(argv[s]);
	sum += d;
	}
	/*print sum*/
	printf("%d\n", sum);
	return (0);
}
