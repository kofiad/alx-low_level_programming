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
	int Fibonacci;
	unsigned long fib1 = 0, fib2 = 1, addition;

	for (Fibonacci = 0; Fibonacci < 50; Fibonacci++)
	{
		addition = fib1 + fib2;
		printf("%lu", addition);
		fib1 = fib2;
		fib2 = addition;
		if (Fibonacci == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
return (0);
}
