#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers
 * starting with 1 and 2
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int a, Fibonacci[50];

	Fibonacci[0] = 1;
	Fibonacci[1] = 2;

	/* to calculate frist 50 Fibonacci numberts*/
	for (a = 2; a < 50; a++)
	{
		Fibonacci[a] = Fibonacci[a - 1] + Fibonacci[a - 2];
	}
	/* to print fibonacci numbers separated by comma and space*/
	for (a = 0; a < 50; a++)
	{
		printf("%d", Fibonacci[a]);
		if (a < (50 - 1))
		{
			printf(", ");
		}
	}
return (0);
}
