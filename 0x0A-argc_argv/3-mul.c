#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argv: argument value
 * @argc: argument count
 *
 * Return: 0 success
 * 1 if numbers less than 2
 */
int main(int argc, char *argv[])
{
	int a, v, product;

	/*check if numbers are not less then 2*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/*converting arguments to numbers*/
	a = atoi(argv[1]);
	v = atoi(argv[2]);
	/*calculate and print the multiplication result*/
	product = a * v;
	printf("%d\n", result);
	return (0);
}
